#include<stdio.h>

int main()
{
    int a , index = 0;
    printf("enter a number\n");

    scanf("%d", &a);


    do
    {
     printf("%d\n", index + 1);
     index = index + 1;



    } while ( index < a);
    
    return 0;
}
