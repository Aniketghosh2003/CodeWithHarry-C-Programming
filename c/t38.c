#include<stdio.h>
typedef struct boy
{
    int weight;
    int height;
    char food;
}std;

int main()
{
     std b1,b2;
    b1.weight = 70;
    printf("the weight of b1 is %d\n", b1.weight);

    //typedef int i;
    //i aniket;
    //aniket = 100;
   // printf("I got %d in the math in hs",aniket);
    // typedef <previous_name> <alias_name>;

    return 0;
}