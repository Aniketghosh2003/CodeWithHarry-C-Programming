#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char name[];
};
struct student aniket, arghya, prantik;

int main()
{
    struct student aniket = {3, 100};
    aniket.name = 'A';
    printf("Hello,my name is %s and my student id is %d and i got %d marks", aniket.name, aniket.id, aniket.marks);
    return 0;
}