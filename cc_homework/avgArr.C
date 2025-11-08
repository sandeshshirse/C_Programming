#include <stdio.h>

void main()
{
    int arr[5], i, sum = 0, count = 0;
    float avg;

    printf("Enter 5 numbers:");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 5.0;

    for(i = 0; i < 5; i++) 
    {
        if(arr[i] > avg)
            count++;
    }

    printf("The count of numbers greater than the average is: %d\n", count);
}