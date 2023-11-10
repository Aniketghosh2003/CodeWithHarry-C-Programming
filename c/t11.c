#include<stdio.h>

int main()
{
    int marks;
    printf("enter your marks\n");
    scanf("%d", &marks);

    switch (marks)
    {
    case 5:
         printf("you got 5 out of 10\n");

        // break;

    case 10:

        printf("you got 10 out of 10\n ");
          break;
    
    default:
        printf("you have been failed");
        break;
    }


    return 0;
}
