#include<stdio.h>

int func(int array[]){

    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n",i,array[i]);
    }
    
}

int main()
{
  int arr[]  = {34,56,78,98};
  func(arr);
    return 0;
}