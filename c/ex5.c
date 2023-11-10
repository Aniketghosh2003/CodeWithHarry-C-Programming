#include <stdio.h>
void func(int arr[])
{
    printf("Before the reverse :-");
    for (int i = 0; i < 6; i++)
    {
        printf("The value at no %d is %d\n",i, arr[i]);
    }
    printf("\n");
    printf("After the reverse:-");
    for (int j = 5; j >= 0; j--)
    {
        printf("The value at no.%d is %d\n ",j, arr[j]);
    }
}

int main()
{
    int arr[] = {2,24,4,45,67,98};
    func(arr);
    return 0;
}