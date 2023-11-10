#include<stdio.h>


int main(int argc, char const *argv[])
{
   int a,b;
   
   printf("Enter 0 for uppor triangular star structure and Enter 1 for lower triangular star structure\n");
   scanf("%d", &a);
   printf("Enter the number of rows\n");
   scanf("%d", &b);

   if (a == 0)
   {
    for (int i = 1; i < b; i++)
    {
        for (int j =1; j <=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
   }
   
else (a == 1);
{
  for (int i =b ; i >= b; i--)
  {
   
  for (int j= 1; j <= i;j++)
  {
    printf("*");
  }
    printf("\n");

  }
  
}

    return 0;
}
