#include<stdio.h>

void changenumber(int* x, int* y)
{
    *x = *x + *y;
    *y = *x - *y;

}
int main()
{
    int a = 2, b = 3;
    printf("a = %d and b = %d\n", a,b);
    changenumber(&a,&b);
    printf("a = %d and b = %d\n",a,b);
    return 0;
}