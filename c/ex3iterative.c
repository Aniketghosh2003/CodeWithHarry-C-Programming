#include<stdio.h>

int fibonaci(int n)
{
   int a = 0;
   int b = 1;
   for (int i = 0; i < n-1 ; i++)
   {
    b = a+b;
    a = b-a;
   }
   


return a;

}
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number for fibonaci series\n");
    scanf("%d\n", &a );


    printf("the value of fibonaci series at position %d using iterative method is %d\n" , a , fibonaci(a));
    return 0;
}
