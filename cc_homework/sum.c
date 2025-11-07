#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ,",i);
        sum= sum+i;
    }
    printf("\nSum=%d",sum);
}