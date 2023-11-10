#include <stdio.h>

int func(int a1)
{
    static int o;
    printf("the value of o is %d\n", o);
    o++;
    // printf("%d\n", &a1);
    return 15;
}

int main()
{
    int a = 12;
    printf("%d\n", a);
    // printf("%d\n", &a);

    int val = func(a);

    val = func(a);
    printf("%d\n", val);
    return 0;
}