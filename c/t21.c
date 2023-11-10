#include <stdio.h>

int factorical(int number)
{
   if (number == 1 || number == 0)
   {
      return 1;
   }
   else
   {
      return number * factorical(number - 1);
   }
}

int main()
{
   int num;
   printf("Enter a number:\n");
   scanf("%d", &num);
   printf("\nThe factorical of %d is %d", num, factorical(num));
   return 0;
}
