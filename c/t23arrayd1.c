#include <stdio.h>

int main()
{
    int marks[10] = {24, 45, 34, 25, 50, 48, 41, 43, 35, 40};
    for (int i = 0; i < 10; i++)
    {
        // printf("enter the number of student of %d\n" ,i);
        // scanf("%d", &marks[i]);
        printf("the number of %d student is %d\n", i, marks[i]);
    }

    return 0;
}
