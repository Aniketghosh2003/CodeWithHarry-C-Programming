#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    char fav_charecter;
    char name[56];
};

int main()
{
    union student aniket;

    aniket.id = 4;
    aniket.fav_charecter = 'u';
    aniket.marks = 100;
    strcpy(aniket.name, "Harry");

    printf("My id is %d\n", aniket.id);
    printf("My marks is %d\n", aniket.marks);
    printf("My favourite charecter  is %c\n", aniket.fav_charecter);
    printf("My name is %s\n", aniket.name);

    return 0;
}