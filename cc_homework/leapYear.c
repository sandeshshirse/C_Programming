#include <stdio.h>
#include <conio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(year % 4 == 0) 
    {
        printf("%d is a Leap Year.\n", year);
    }
    else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    getch();
    return 0;
}
