#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    
    scanf(" %c", &ch); 

    printf("\nResult: ");

   
    if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a DIGIT.\n", ch);
    } 
    
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("The character '%c' is a VOWEL.\n", ch);
                break;
            default:
                printf("The character '%c' is a CONSONANT.\n", ch);
                break;
        }
    } 
   
    else {
        printf("The character '%c' is a SYMBOL.\n", ch);
    }

    return 0;
}