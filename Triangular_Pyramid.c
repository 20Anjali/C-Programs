#include<stdio.h>

int main()
{
    int r, c, n, m;

    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);
    printf("Rows = %d , Columns = %d\n",n,m);

    for(r=0; r<n; r++)
    {
        for(c=0; c<=m/2; c++)
        {
             if ((c == 0 || c == n / 2) && r != 0 || (r == 0 && c != 0 && c != n / 2) || (r == n / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
