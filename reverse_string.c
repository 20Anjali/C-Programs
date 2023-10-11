#include<stdio.h>
#include<string.h>
#define size 100

int main()
{
    char str[size],temp;

    printf("Enter the string: ");
    fgets(str,100,stdin);
    printf("Before reverse: %s\n",str);

    int len = strlen(str);
    for(int i=0 ; i<len/2 ; i++)
    {
       temp = str[i];
       str[i] = str[len - i - 1];
       str[len - i - 1] = temp;
    }
    printf("After reverse: %s",str);

    return 0;
}