#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter range: ");
    scanf("%d %d",&n,&m);

    if(n <= 1)
    {
        n = 2;
    }

    for(int i=n; i<=m; i++)
    {
        int isprime = 1;
        
        for(int j=2; j * j<=m; j++)
        {
            if(i % j == 0)
            {   
                isprime = 0;
            }
        } 
        if(isprime)
        {
            printf("prime numbers: %d\n",i);
        }   
    }
    return 0;
}