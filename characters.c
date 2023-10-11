#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch); 
  
    char s[MAX_LEN] = "Language";
    scanf("%s",s);
    printf("%s\n",s); 
    
    char sen[MAX_LEN] = "Welcome To C!!";
    scanf("%[^\n]%*s",sen);
    printf("%s",sen); 
      
    return 0;
}
