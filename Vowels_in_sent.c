#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
    char str[size];
    char vowel[size] = {'a','A','e','E','i','I','o','O','u','U'};
    
    printf("Enter sentence: ");
    fgets(str, size, stdin);

    printf("Vowels present in sentence are: ");
    int len = strlen(str); 
    int vowel_Count = 0;

    for(int i=0; i<len; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(str[i] == vowel[j])
            {
                printf("%c\n",str[i]);
                vowel_Count++;
            }
        }
    }   
    printf("Vowel count is: %d", vowel_Count);
    return 0;
}