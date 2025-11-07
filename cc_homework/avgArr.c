#include<stdio.h>
void main()
{
    int arr[10],n,sum=0;
    float avg;
    printf("Enter 10 numbers:");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(n=0;n<10;n++)
    {
        sum= sum+arr[n];
        
    }
    avg=sum/10.0;
    printf("\nSum=%d",sum);
    printf("\nAverage:%f",avg);
}