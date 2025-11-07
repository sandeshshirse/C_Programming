#include<stdio.h>
void main()
{
    int num,i,count=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    do{
    num=num/10;
    count+=1;    
    }
    while (num>=1);
    printf("there are %d digits",count);  
}