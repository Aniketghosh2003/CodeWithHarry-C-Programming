#include <stdio.h>
int main()
{
    int a;
    int *ptr = NULL;
    if (ptr == NULL)
    {
        printf("the address is %d and the value can not be dereferenced", ptr);
    }
    else
    {

        printf("the address is %d and the value is %d\n", ptr, *ptr);
    }
    return 0;
}