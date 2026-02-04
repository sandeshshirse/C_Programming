#include <stdio.h>


enum Level {
    LOW,    
    MEDIUM,
    HIGH    
};

int main() {
   
    enum Level myVar = MEDIUM;

   
    printf("Value: %d", myVar); // Output: 1

    return 0;
}
