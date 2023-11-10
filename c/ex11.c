#include <stdio.h>
// #include<stdlib.h>
// #include<string.h>
int palindrome(int num)
{
    int reversed = 0;
    int original = num;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    if (original == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    printf("cheak wheather it is a palindrome or not\n");
    scanf("%d", &a);
    if (Palindrome(a))
    {
        printf("This number is a palindrome\n");
    }

    else
    {
        printf("This number is not a palindrome\n");
    }

    return 0;
}
