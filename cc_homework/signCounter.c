#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        if(num > 0) {
            positive++;
        }
        else if(num < 0) {
            negative++;
        }
    }

    printf("Total Positive Numbers: %d\n", positive);
    printf("Total Negative Numbers: %d\n", negative);

    getch();
    return 0;
}
