#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "principle of physics";

    // ****** Reading a file ******
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("my name is %s\n",string );

    // ****** Writing a file ******
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);

    return 0;
}
