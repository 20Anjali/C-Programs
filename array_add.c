#include<stdio.h>
#define n 10
int main()
{
    int arr1[n] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[n] = {1,2,3,4,5,6,7,8,9,10};
    int i,arr3[n];

    printf("Enter arr1 : ");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",arr1[i]);
    }printf("\n\n");

    printf("Enter arr2 : ");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",arr1[i]);
    }printf("\n\n");

    printf("Addition of array_1 and array_2 : ");
    for(i=0;i<=n;i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    for(i=0;i<=n;i++)
    {
        printf("%d\t",arr3[i]);
    }printf("\n\n");
}