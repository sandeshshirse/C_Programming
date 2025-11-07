#include <stdio.h>

int main() 
{
    int total_outcomes = 6;
    int favorable_outcomes = 3;
    
    float probability = (float)favorable_outcomes / total_outcomes;
    
    printf("Total sides on the die: %d\n", total_outcomes);
    printf("Even numbers: %d\n", favorable_outcomes);
    printf("The probability of rolling an even number is: %.2f\n", probability);
    
    return 0;
}