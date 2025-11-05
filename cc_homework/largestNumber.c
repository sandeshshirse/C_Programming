#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
    {
        printf("Largest number is: %d\n", a);
    }
    else if(b >= a && b >= c) {
        printf("Largest number is: %d\n", b);
    }
    else {
        printf("Largest number is: %d\n", c);
    }

    getch();
    return 0;
}
