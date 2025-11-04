#include <stdio.h>


int main() {
    float radius, area;

   
    printf("Enter the radius of the circle: ");
    
    
    scanf("%f", &radius); 

    
    area = 3.14 * radius * radius;

   
    printf("\nThe area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}