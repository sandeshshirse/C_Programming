#include <stdio.h>
void main()
{
    float a, b, c;
    printf("Enter the sides of triangle:");
    scanf("%f %f %f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid triangle");
    }
    else if (a + b < c || b + c < a || a + c < b)
    {
        printf("Wrong values");
    }
    else if (a == b && b == c)
    {
        printf("Triangle is equilateral");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Triangle is isosceles");
    }
    else
    {
        printf("Trianlge is scalene");
    }
}