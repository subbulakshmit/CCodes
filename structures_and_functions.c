#include <stdio.h>
#include <string.h>
struct Person
{
    char name[20];
    int age;
};

void printPerson(struct Person p)
{
    // Print out a single name
    printf("%s is %d years old.\n", p.name, p.age);
}

void printPeople(struct Person p[], int n)
{
    // Print out names for an array of structs
    for (int i = 0; i < n; i++)
    {
        printf("%s is %d years old.\n", p[i].name, p[i].age);
    }
}

int main()
{
    // initialize and print for 1 person
    struct Person A;
    A.age = 12;
    strcpy(A.name, "Ajit Pal");
    printPerson(A);

    // print for multiple people
    struct Person B[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Name(%d): ", i);
        scanf("%s", &B[i].name);
        printf("Age(%d): ", i);
        scanf("%d", &B[i].age);
    }

    printPeople(B, 3);
}