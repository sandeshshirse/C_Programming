#include <stdio.h>

// Function to swap the values
void swap(int *n1, int *n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

   
    swap(&a, &b);

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}
