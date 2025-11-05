#include <stdio.h>
#include <conio.h>

int main() 
{
    int x, y, i;
    int result = 1;  

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    for(i = 1; i <= y; i++) {
        result = result * x;
    }

    printf("%d ^ %d = %d\n", x, y, result);

    getch();
    return 0;
}
