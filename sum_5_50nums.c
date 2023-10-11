#include<stdio.h>

int main()
{
    int sum=0;

    for(int i=5; i<=50; i++)
    {
        sum = sum + i;
    }
    printf("Sum of 5 to 50 numbers : %d",sum);
    return 0;
}