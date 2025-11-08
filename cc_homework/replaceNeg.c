#include <stdio.h>

void main()
{
    int arr[8], i;
    printf("Enter 8 number:");

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 8; i++)
    {
        if (arr[i] < 0)
            arr[i] = 0;
    }
    printf("The changed array is:");
    for (i = 0; i < 8; i++)
    {
        printf("%d ,", arr[i]);
    }
}