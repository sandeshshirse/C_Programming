#include <stdio.h>

int main() {
    int years, months, total_months, days;

    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("Enter number of extra months: ");
    scanf("%d", &months);

    total_months = (years * 12) + months;
    days = total_months * 30;

    printf("Total months = %d\n", total_months);
    printf("Total days (approx) = %d\n", days);

    return 0;
}