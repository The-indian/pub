#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char name[14];
};

int main(){
    struct student Harry, Ravi, Shubham;
    Harry.id = 1;
    Ravi.id = 2;
    Shubham.id = 3;
    Harry.marks = 97;
    Ravi.marks = 95;
    Shubham.marks = 92;
    strcpy(Harry.name, "Harry Potter student of the year");
    printf("Harry got %d marks\n", Harry.marks);
    printf("Harry's name %s\n", Harry.name);
    strcpy(Shubham.name, "Shubham kumar");
    printf("Shubham got %d marks\n", Shubham.marks);
    printf("Shubham'name %s\n", Shubham.name);
    return 0;
}
