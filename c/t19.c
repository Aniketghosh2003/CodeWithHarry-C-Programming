#include<stdio.h>

int sum(int a, int b)
{
    return a + b;
}


int main()
{
    int a, b, c;
    a = 17;
    b = 57;
   c = sum(a, b);
     printf("%d" , c);


    return 0;
}
