#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int age;
    char gender;
};

int main()
{
    // initialize struct and its values
    struct Person p;
    strcpy(p.name, "John Doe");
    p.age = 32;
    p.gender = 'm';

    // print them out

    printf("The person's name is %s and he is %d years old\n",
           p.name,
           p.age);
    printf("Sex: %c", p.gender);

    return 0;
}