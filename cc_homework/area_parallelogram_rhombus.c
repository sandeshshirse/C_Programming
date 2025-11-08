#include <stdio.h>

int main() {
    float base, height, area_parallelogram;
    float d1, d2, area_rhombus;

    printf("Enter base and height of parallelogram: ");
    scanf("%f %f", &base, &height);
    area_parallelogram = base * height;
    printf("Area of parallelogram = %.2f\n", area_parallelogram);

    printf("Enter the two diagonals of rhombus: ");
    scanf("%f %f", &d1, &d2);
    area_rhombus = 0.5 * d1 * d2;
    printf("Area of rhombus = %.2f\n", area_rhombus);

    return 0;
}