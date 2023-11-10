#include <stdio.h>
int main()
{
    int a = 56;
    float b  = 6.9;
    void *ptr;
    ptr = &a;
    printf("the value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("the value of b is %f\n", *((float *)ptr));
    return 0;
}