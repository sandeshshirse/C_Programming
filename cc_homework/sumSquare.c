#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
    
    printf("The squares of the numbers are:");
    for(int i=0;i<=n;i++)
    {
        
        printf("%d ,", i*i);
        sum=sum+(i*i);
    }
    printf("\nThe sum of squares of natural number is :%d",sum);

}