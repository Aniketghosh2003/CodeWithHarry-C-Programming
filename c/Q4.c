#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char t1[20];
    char t2[30];
    //char t3[40] = "is a friend of ";
    printf("Enter the name of first friend:");
    gets(t1);
    printf("Enter the name of the second friend:");
    gets(t2);
    //puts(strcat(t1,strcat(t2,t3)));
    printf("%s is a friend of %s", t1,t2);
    return 0;
}


