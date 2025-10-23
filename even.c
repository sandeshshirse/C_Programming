#include <stdio.h>

int main() {
    printf("Even numbers from 1 to 20:\n");

    // Loop through every number from 1 to 20
    for (int i = 1; i <= 20; i++) {
        
        // Check if the number is divisible by 2
        if (i % 2 == 0) {
            // If the remainder is 0, the number is even, so print it
            printf("%d ", i);
        }
    }

    printf("\n"); // To move the cursor to a new line after
    return 0;
}