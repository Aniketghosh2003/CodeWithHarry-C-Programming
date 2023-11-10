#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'A', 'n', 'i', 'k', 'e', 't', '\0'};
    //  char str[] = "Aniket";
    // printstr(str);

    char str[56];
    gets(str);
    printstr(str);
    printf("%s\n", str);
    puts(str);

    return 0;
}