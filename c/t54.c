#include <stdio.h>
#include <stdlib.h>

int *funcdang()
{
    int x = 45;

    int y = 78;
    int sum = x + y;
    return &sum;
}

int main()
{
    int *ptr = (int *)malloc(4 * sizeof(int));
    ptr[0] = 12;
    ptr[1] = 22;
    ptr[2] = 42;
    ptr[3] = 72;
    free(ptr); // ptr is a dangling pointer

    int *ptr2 = funcdang();

    int *ptr3;
    {
        int a = 56;
        ptr3 == &a;
    }

    return 0;
}