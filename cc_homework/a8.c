#include <stdio.h>


int square(int x) {
    return x * x;
}

int main() {
   
    int result = square(4);

   
    printf("Square: %d\n", result); 

    return 0; 
}