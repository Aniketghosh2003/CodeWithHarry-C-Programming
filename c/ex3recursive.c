#include<stdio.h>

int fabonaci(int n)

{if (n == 1)
{
  return 0;
  }
else if (n == 2)
{
    return 1;
}
else {

return fabonaci(n - 1) + fabonaci(n - 2);

}
}

int main()
{
    int a;
    printf("Enter the number\n ");
    scanf("%d", &a);

    printf("the value of fabonaci series at position %d using recursive method is %d\n", a, fabonaci(a));


    return 0;
}
