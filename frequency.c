#include <stdio.h>
void main(){
    int arr[8],frequency=0,desiredNumber;
    printf("Enter 8 numbers:");
    for(int i=0; i<8; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Desired number:");
    scanf("%d",&desiredNumber);
    for(int i=0;i<8; i++ )
    {
        if (arr[i]==desiredNumber)
        frequency+=1;

    }
    printf("The number %d has appeared %d times",desiredNumber,frequency);
}