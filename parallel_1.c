#include<stdio.h>
#include<omp.h>

int main()
{   //Declaration of rows,columns and two 2d-matrix.
    int r,c; 
    //Ask rows to user
    printf("Enter number of rows: ");
    //take no. of rows input from user.
    scanf("%d",&r);
    //Ask columns to user.
    printf("Enter number of columns: ");
    //take no. of columns input from user.
    scanf("%d",&c);

    int x[r][c],y[r][c],z[r][c];
    //Ask Matrix-1 each elements to user.
    printf("Enter elements for matrix 1: \n");
    //print elements of matrix-1 from 0 to no. of rows given by user.
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&x[i][j]);
    } 

    //Print matrix with each elements. 
    printf("Enter matrix 1: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            // \t use to form columns.
            printf("%d\t",x[i][j]);
        }
        // \n use to form rows.
        printf("\n");
    }  

    //Ask Matrix-2 each elements to user.
    printf("Enter elements for matrix 2: \n");
    //print elements of matrix-2 from 0 to no. of rows given by user.
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&y[i][j]);
    } 

    //Print matrix with each elements.
    printf("Enter matrix 2: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            // \t use to form columns.
            printf("%d\t",y[i][j]);
        }
        // \n use to form rows.
        printf("\n");
    }

    #pragma omp parallel
    printf("Addition of matrix: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            //Add two matrix.
            z[i][j] = x[i][j] + y[i][j];
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            // \t use to form columns.
            printf("%d\t",z[i][j]);
        }
        // \n use to form rows.
        printf("\n");
    }
    
 return 0;   
}