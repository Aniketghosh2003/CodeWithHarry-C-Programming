#include <stdio.h>
#include <stdlib.h>

int main()
{ // use of malloc
    /*printf("Enter the size of array what you want the");

    int n;
    scanf("%d\n", &n);

   int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the numer %d\n",i);
        scanf("%d\n",&ptr[i]);
    }
     for (int i = 0; i < n; i++)
     {
       printf("The value at %d of the array is %d\n",i,ptr[i]);
     }*/
    // use of calloc
    printf("Enter the size of array what you want the\n");

    int n;
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the numer %d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is %d\n", i, ptr[i]);
    }
    // use of realloc
    printf("Enter the size of new array what you want the\n");

    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the new numer %d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of the array is %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}