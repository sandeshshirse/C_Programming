#include <stdio.h>

int main() {
    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++) {
        sum = sum + i; // Adds the current value of i to sum
    }
    printf("The sum of numbers from 1 to 10 is: %d\n", sum);
    return 0;
}
