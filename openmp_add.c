#include<stdio.h>
#include<omp.h>

int main()
{
    omp_set_num_threads(2);

    int ID = omp_get_thread_num();
    int num1,num2,sum=0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    #pragma omp parallel 
        {
            sum = num1 + num2;

            printf("%d + %d = %d by thread %d\n",num1,num2,sum,ID);
        }
    printf("Total no. of threads: %d",omp_get_num_threads());
    return 0;
}