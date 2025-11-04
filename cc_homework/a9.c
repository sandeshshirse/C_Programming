#include <stdio.h>

int main() {
    printf("Even numbers from 1 to 10:\n");

    
    for (int i = 1; i <= 10; i++) {
        
        
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    
    return 0;
}