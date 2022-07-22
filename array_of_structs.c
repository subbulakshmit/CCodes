#include <stdio.h>

struct Person
{
    int id;
    char name[20];
    int age;
};

int main()
{
    // intialize list of structs
    struct Person p[5];

    // initialize values with for loop
    for (int i = 0; i < 5; i++)
    {
        printf("Currently entering details for person %d.\n", i + 1);
        printf("Enter the person's id: ");
        scanf("%d", &p[i].id);
        printf("Enter the person's first name: ");
        scanf("%s", &p[i].name);
        printf("Enter the person's age: ");
        scanf("%d", &p[i].age);
    }

    // print out the requisite details
    for (int i = 0; i < 5; i++)
    {
        printf("%d: %s, %d years old.\n",
               p[i].id,
               p[i].name,
               p[i].age);
    }
}