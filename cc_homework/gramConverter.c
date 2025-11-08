#include <stdio.h>

int main() {
    float kg, g;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);

    g = kg * 1000;

    printf("%.2f kilograms = %.2f grams\n", kg, g);

    return 0;
}