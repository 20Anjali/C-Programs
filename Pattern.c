#include<stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    for(int r=0; r<=num; r++)
    {
        for(int c=0; c<=num; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}