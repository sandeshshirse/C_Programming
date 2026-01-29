#include<stdio.h>
int main(){
    
    char ch;
    printf("Enter your character:");
    scanf("%c", &ch);
    
    switch(ch){
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        printf("smaller case vowel");
        break;
        
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
        printf("uppar case vowel");
        break;
        
        default :
        printf("Consonant ");
        break;
    }
    return 0;
}
