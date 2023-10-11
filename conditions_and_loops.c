#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    char* a[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &n);

    if(9 >= n) 
       printf("%s\n",a[n-1]);
  
    else 
       printf("Greater than 9"); 

    return 0;

}