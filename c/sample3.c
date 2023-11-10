#include<stdio.h>
/*#include<stdlib.h>
#include<string.h>
#include<math.h>*/
int main()
{
    FILE* ptr = NULL;
    ptr = fopen("myfile.txt","w");
    char str[] = "I am the best .";
    fputs(str,ptr);




    return 0;
}