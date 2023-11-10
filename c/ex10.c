#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()

{
    int m, n, a, b;
    int sum = 0;
    printf("\nLet 1st matrix be A and 2nd matrix be B\n\n");
    printf("Enter the no. of rows in matrix A: ");
    scanf("%d", &m);
    getchar();
    printf("Enter the no. of columns in matrix A: ");
    scanf("%d", &n);
    getchar();
    printf("Enter the no. of rows in matrix B: ");
    scanf("%d", &a);
    getchar();
    printf("Enter the no. of columns in matrix B: ");
    scanf("%d", &b);
    getchar();

    int matrix1[m][n];
    int matrix2[a][b];
    int result[m][b];
    if (n != a)
    {
        printf("maltiplication can not took place");
    }
    else
    {

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter number for matrix1");
                scanf("%d", &matrix1[i][j]);
                getchar();
            }
        }
        printf("\n\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("Enter number for matrix1");
                scanf("%d", &matrix2[i][j]);
                getchar();
            }
        }
    
    printf("mutiplication of the matrix");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < a; i++)
            {

                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j <b; j++)
            {
                printf("%d\n", result[i][j]);
                

            }
        }
         printf("\n");
    }

    return 0;
}