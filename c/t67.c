#include <stdio.h>
// #include<stdlib.h>
// #include<string.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "a+");
    // char *a = fgetc(ptr);
    // printf("%c\n", a);

    char str[10];
    fgets(str, 7, ptr);
    printf("My name is %s\n", str);
    fputc('o', ptr);
    fclose(ptr);

    return 0;
}