#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;   
  
  printf("Value at ptr: %d\n", *ptr);

    ptr++;  
    printf("After ptr++ : %d\n", *ptr);

    ptr = ptr + 2; 
    printf("After ptr + 2 : %d\n", *ptr);

    ptr--; 
    printf("After ptr-- : %d\n", *ptr);

    return 0;
}
