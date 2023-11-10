#include <stdio.h>
// #include<stdlib.h>
// #include <string.h>
#include <math.h>
#define pi 3.14

float Edistance(int x1, int x2, int y1, int y2)
{

    double d1 = (x2 - x1);
    double d2 = (y2 - y1);
    double d3 = pow(d1, 2);
    double d4 = pow(d2, 2);
    double d5 = (d3 + d4);
    double d6 = sqrt(d5);
    return d6;
}
float areaofcircle(int x1, int x2, int y1, int y2, float (*ptr)(int, int, int, int))
{
    float d = ptr(x1, x2, y1, y2);
    float h = d / 2;
    return pi * pow(h, 2);
}

int main()
{
    float (*ptr)(int, int, int, int);
    ptr = &Edistance;

    int x1, x2, y1, y2;
    printf("enter the value of x1\n");
    scanf("%d", &x1);
    printf("enter the value of x2\n");
    scanf("%d", &x2);
    printf("enter the value of y1\n");
    scanf("%d", &y1);
    printf("enter the value of y2\n");
    scanf("%d", &y2);
   

    float area = areaofcircle(x1,x2,y1,y2, ptr);
    printf("the  area of circle is %.2f\n",area);
    return 0;
}