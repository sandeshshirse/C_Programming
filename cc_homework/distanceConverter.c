#include <stdio.h>

int main() {
    float meters, kilometers, centimeters;

    printf("Enter distance in meters: ");
    scanf("%f", &meters);
    kilometers = meters / 1000;
    printf("%.2f meters = %.2f kilometers\n", meters, kilometers);

    printf("Enter distance in centimeters: ");
    scanf("%f", &centimeters);
    meters = centimeters / 100;
    printf("%.2f centimeters = %.2f meters\n", centimeters, meters);

    return 0;
}