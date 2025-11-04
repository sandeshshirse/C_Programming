#include <stdio.h>

int main() {
    int choice;
    float side, base, height, area;

    
    printf("1. Area of a Square\n");
    printf("2. Area of a Triangle\n");
    printf("Enter your choice (1 or 2): ");
    
    
    scanf("%d", &choice);

    printf("\n"); 

   
    switch (choice) {
        case 1:
            
            printf("You chose: Area of a Square.\n");
            printf("Enter the side length: ");
            scanf("%f", &side);
            
            
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
            break;

        case 2:
            
            printf("You chose: Area of a Triangle.\n");
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);

           
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2f\n", area);
            break;

        default:
            
            printf("Invalid choice. Please run the program again and enter 1 or 2.\n");
    }

    return 0;
}