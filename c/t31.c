#include<stdio.h>
void changenumber(int* x)
{

*x = 45;
}


int main(int argc, char const *argv[])
{
    int a = 27;
    printf("The value of a is %d\n", a);
    changenumber(&a);
    printf("The new value of a is %d\n" ,a);
    return 0;
}
