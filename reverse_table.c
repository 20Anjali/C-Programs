#include<stdio.h>

int main()
{
    int num,reverse;

    printf("Enter number: ");
    scanf("%d",&num);
    printf("Reverse table for %d:\n",num);

    for(int i=10; i>=0; i--)
    {
        reverse = num * i;
        printf("%d * %d = %d\n",num,i,reverse);
    }
    return 0;
}