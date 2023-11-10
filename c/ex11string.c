#include<stdio.h>
//#include<stdlib.h>
#include<string.h>

int main()
{
    char s1[30],s2[20],s3;
    gets(s1);
    strcpy(s2,s1);
    strrev(s1);
    s3 = strcmp(s1,s2);
    if (s3 == 0)
    {
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome ");
    }
    return 0;
}