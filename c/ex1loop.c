#include<stdio.h>


int main()
   {
   int a, i=1;
   printf(" Enter a number you want multiplication table of :");
   scanf("%d\n" , &a);

do
{
   
    printf("%d * i = %d\n" ,a, a * i);
   i++;
   

} while ( i <= 10);


    return 0;
}
