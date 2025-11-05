#include <stdio.h>
#include <conio.h>

int main() {
    int choice;
    float celsius, fahrenheit;

    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5/9;
            printf("Temperature in Celsius = %.2f\n", celsius);
            break;

        default:
            printf("Invalid choice! Please run again.\n");
    }

    getch();
    return 0;
}
