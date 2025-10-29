#include <stdio.h> // gotta have this for printing and scanning

int main() {
    // Declaring the four variables we need for the numbers and stuff
    int number_input;
    int number_original;
    int number_reversed; 
    int digit_remainder; // this holds the last digit

    
    number_input = 0;
    number_original = 0;
    number_reversed = 0; // making sure this starts at zero
    digit_remainder = 0;

    // asking the user for the number now
    printf("Please enter a whole number, only integers: ");
    
    // now we use scanf to get the number from the keyboard
    scanf("%d", &number_input);

    /
    number_original = number_input;

   
    while (number_input != 0) {
       
           digit_remainder = number_input % 10;

       
        // multiply the reversed number by 10 and add the new digit
            number_reversed = number_reversed * 10;
             number_reversed = number_reversed + digit_remainder;

       
        number_input = number_input / 10;

       
    if (number_original == number_reversed) {
        printf("\nResult check is finished."); // just some extra print out
        printf("\nYES! The number %d is a PALINDROME.", number_original);
    } 
    // otherwise, if they are not the same, it is not a palindrome
    else {
        printf("\nResult check is finished."); // just some extra print out
        printf("\nNO. The number %d is NOT a PALINDROME.", number_original);
    }

    // always return 0 at the end because main is an int function
    return 0;
}