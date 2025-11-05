#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int digit;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

   
    int tempNumber = number; 

    
    while (tempNumber > 0)
    {
       
        digit = tempNumber % 10; 
        
        
        sum += digit; 
        
        
        tempNumber /= 10; 
    }

    printf("The sum of the digits of %d is: %d\n", number, sum);

    return 0;
}