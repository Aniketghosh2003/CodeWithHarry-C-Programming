#include<stdio.h>

int main()
{
    int a;
    printf("enter 1 if you have passed in math\n");
    printf("enter 2 if you have passed in science\n");
    printf("enter 3 if you have passed in math and science both\n");

    scanf("%d", &a);

    if ( a == 1)
    {
        printf("your gift is a pen worth 15 rupee");
    }
    else if (a == 2)
    {
        printf("your gift is a pen worth 15 rupee");

    }
    else if (a == 3)
    {
        printf("your gift is a pencil box worth 45 rupee");
    }
    




    return 0;
}
