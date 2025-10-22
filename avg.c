#include <stdio.h>

int main() {
    int n1, n2, n3;

    // Ask the user to enter three numbers
    printf("Enter three different numbers: ");
    
    // Read the three numbers from the user
    scanf("%d %d %d", &n1, &n2, &n3);

    // Check which number is the largest
    if (n1 >= n2 && n1 >= n3) {
        // If n1 is greater than or equal to both n2 and n3
        printf("%d is the largest number.\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        // If n2 is greater than or equal to both n1 and n3
        printf("%d is the largest number.\n", n2);
    } else {
        // If neither n1 nor n2 are the largest, n3 must be
        printf("%d is the largest number.\n", n3);
    }

    return 0;
}