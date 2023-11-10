#include <stdio.h>

int myfunc(int a, int b)
{
    int sum;
    return a + b;
}
int sum = 345;
int main()
{
    // int sum = myfunc(3, 4);
    extern int sum;

    printf("the value is %d\n", sum);
    return 0;
}