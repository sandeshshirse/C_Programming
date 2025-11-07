#include <stdio.h>

void main()
{
    int number;
    int cube;

    printf("Enter an integer: ");
    
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input.\n");
        return;
    }

    cube = number * number * number;

    printf("The cube of %d is: %d\n", number, cube);
}