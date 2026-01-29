#include<stdio.h>
int main(){
    
    char ch;
    printf("Enter your character:");
    scanf("%c", &ch);
    
    if(ch>'A'&&ch<'Z'){
        printf("This is Upper Case");
    }
    else if(ch>'a'&&ch<'z'){
        printf("This is Smaller Case");}
    
    else if(ch>='0' && ch<'9'){
        printf("This is Number");}
        
    else{
        printf("This is a Special Character");
    }    
    return 0;
}
