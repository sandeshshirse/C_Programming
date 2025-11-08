#include <stdio.h>

int main() {
    float a, b, h, area;

    printf("Enter length of first parallel side: ");
    scanf("%f", &a);

    printf("Enter length of second parallel side: ");
    scanf("%f", &b);

    printf("Enter height: ");
    scanf("%f", &h);

    area = 0.5 * (a + b) * h;

    printf("Area of trapezium = %.2f\n", area);

    return 0;
}