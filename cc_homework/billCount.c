#include <stdio.h>
#include <conio.h>

int main() {
    int units, i;
    float bill = 0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

   
    printf("Counting units: ");
    for(i = 1; i <= units; i++) {
        printf("%d ", i);
    }
    printf("\n");

    if(units <= 100) {
        bill = units * 1.5;
    }
    else if(units <= 300) {
        bill = (100 * 1.5) + (units - 100) * 3;
    }
    else {
        bill = (100 * 1.5) + (200 * 3) + (units - 300) * 5;
    }

    printf("Total Electricity Bill = Rs. %.2f", bill);

    getch();
    return 0;
}
