#include "stdio.h"
#include"string.h"
int main()
{
    int a[400];
    int b[400];
    printf("please enter the word\n");
    scanf("%[^\n]",&a);
    printf("the word is %s \n",a);
    strcpy(b,a);
    strrev(b);
    printf("the word after reverse is %s\n",b);
    if(strcmp(b,a)==0)
    {
        printf("the word is palindrome");
    }
    else
    {
        printf("the word is not palindrome");
    }

}