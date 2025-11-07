#include <stdio.h> 
int main() 
{
    
    int number_input;
    int number_original;
    int number_reversed; 
    int digit_remainder; 

    
    number_input = 0;
    number_original = 0;
    number_reversed = 0; 
    digit_remainder = 0;

   
    printf("Please enter a whole number, only integers: ");
    
    
    scanf("%d", &number_input);


    number_original = number_input;

   
    while (number_input != 0) {
       
           digit_remainder = number_input % 10;

       
        
            number_reversed = number_reversed * 10;
             number_reversed = number_reversed + digit_remainder;

       
        number_input = number_input / 10;

       
    if (number_original == number_reversed) {
        printf("\nResult check is finished."); // just some extra print out
        printf("\nYES! The number %d is a PALINDROME.", number_original);
    } 
    
    else {
        printf("\nResult check is finished."); // just some extra print out
        printf("\nNO. The number %d is NOT a PALINDROME.", number_original);
    }

   
    return 0;
}