#include <stdio.h>

int main() {
    float temp;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 20) {
        printf("COLD\n");
    } 
    else if (temp <= 30) {
        printf("WARM\n");
    } 
    else {
        printf("HOT\n");
    }

    return 0;
}