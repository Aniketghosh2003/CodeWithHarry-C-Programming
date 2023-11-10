#include <stdio.h>
#include <string.h>

struct driver
{
    char name[20];
    char lic[20];
    char route[20];
    float km;
};

int main()
{
    struct driver d1, d2, d3;
    printf("The the details of the driver:-\n");

    for (int i = 1; i < 4;)
    {
        printf("enter the no of the driver\n");
        scanf("%d", &i);
        if (i = 1)
        {
            printf("Enter the name\n");
            gets(d1.name);
            printf("Enter the license no\n");
            gets(d1.lic);
            printf("enter the route\n");
            gets(d1.route);
            printf("Enter the travel distance\n");
            scanf("%d", &d1.km);
            printf("the name of driver1 is %c\n", d1.name);
            printf("the license of driver1 is %c\n", d1.lic);
            printf("the route of driver1 is %c\n", d1.route);
            printf("the travel distance of driver1 is %d\n", d1.km);
        }
        else if (i = 2)
        {
            printf("Enter the name\n");
            gets(d2.name);
            printf("Enter the license no\n");
            gets(d2.lic);
            printf("enter the route\n");
            gets(d2.route);
            printf("Enter the travel distance\n");
            scanf("%d", &d2.km);
            printf("the name of driver2 is %c\n", d2.name);
            printf("the license of driver2 is %c\n", d2.lic);
            printf("the route of driver2 is %c\n", d2.route);
            printf("the travel distance of driver2 is %d\n", d2.km);
        }
        else if (i = 3)
        {
            printf("Enter the name\n");
            gets(d3.name);
            printf("Enter the license no\n");
            gets(d3.lic);
            printf("enter the route\n");
            gets(d3.route);
            printf("Enter the travel distance\n");
            scanf("%d", &d3.km);
            printf("the name of driver3 is %c\n", d3.name);
            printf("the license of driver3 is %c\n", d3.lic);
            printf("the route of driver3 is %c\n", d3.route);
            printf("the travel distance of driver3 is %d\n", d3.km);
        }
    }

    return 0;
}