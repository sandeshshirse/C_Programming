#include <stdio.h>

void main()
{

    int arr[7], i, pos = 0, neg = 0, zero = 0;

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 7; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);
}