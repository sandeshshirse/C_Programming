#include <stdio.h>
void main()
{
    int num,i;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("0 is neither prime nor composite");
    }
    else if (num == 1)
    {
        printf("1 is neither prime nor composite");
    }
   else
{
    for( i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            printf("Number is not prime");
            break;
        }
    }
    if(i == num)
    {
        printf("Number is prime");
    }
}

}