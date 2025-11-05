#include <stdio.h>

int main() {
    float totalBill;
    int numPeople;
    float individualShare;

    printf("Enter total bill: ");
    scanf("%f", &totalBill);

    printf("Enter number of people: ");
    scanf("%d", &numPeople);

    individualShare = totalBill / numPeople;

    printf("Each person pays: $%.2f\n", individualShare);
    
    return 0;
}