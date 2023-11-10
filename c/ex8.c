#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int n;
    ptr = (char *)malloc(n * sizeof(char));
    for (int i = 1; i <= 3; i++)
    {
        printf("Employee no %d\n", i);
        printf("Enter the number in the employee id\n");
        scanf("%d", &n);
        printf("Enter the employee%d id", i);
        scanf("%c", ptr);
        printf("The employee id is %c", ptr);
    }

    return 0;
}