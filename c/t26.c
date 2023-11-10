#include<stdio.h>

int main()
{
    int a = 45;
    int *point = &a;
    int *point2 = NULL;
    printf("The value of a is %d\n", *point);
    printf("the address of a is %x\n", point);
    printf("the address point is %x\n", &point);

   printf("the address of point2 is is %x\n", &point2 );


    return 0;
}
