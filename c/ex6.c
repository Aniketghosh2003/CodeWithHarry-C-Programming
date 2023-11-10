#include <stdio.h>

void parser(char arr[])
{

    for (int i = 5; i < 23; i++)
    {
        printf("%c", arr[i]);
    }
}

int main()
{
    char string[] = "<h1> this is a heading </h1>";
    parser(string);
    return 0;
}