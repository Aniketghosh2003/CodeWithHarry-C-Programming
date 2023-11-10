#include<stdio.h>

int main()
{
    //int a = 34;

    //ptra++;
    // int *ptra = &a;
    // printf("%d\n", ptra);
   // printf("%d\n", ptra);

   int arr[] = { 2, 34, 54, 67, 23, 4 , 87, 90};
   printf("the address of the first number of the array is %d\n", &arr[0]);
   printf("the address of the first number of the array is %d\n", arr );
   printf("the address of the secound number of the array is %d\n ", arr+1);
   printf("the address of the secound number of the array is %d\n",&arr[1] );


   printf("the value of the first number of the array is %d\n", *(&arr[0]));
   printf("the value of the first number of the array is %d\n",*(arr));
   printf("the value of the first number of the array is %d\n", arr[0]);

    return 0;
}
