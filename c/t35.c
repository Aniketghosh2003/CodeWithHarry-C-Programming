#include <string.h>

int main()
{
    char s1[] = "hello";
    char s2[] = "world";
    // puts(strcat(s1,s2));
    // printf("the length of the string is %d\n",strlen(s1));
    puts(strrev(s1));
    strcpy(s1, s2);
    puts(s1);
    puts(s2);
    return 0;
}