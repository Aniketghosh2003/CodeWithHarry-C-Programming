#include<stdio.h>

int main()
{
  int age;
   printf("Enter the age\n");

   scanf("%d", &age);

    printf("You have entered %d as your age\n", age);
    
    if (age>18)
    {
    printf("you can vote\n");
    }
    
    return 0;
}
