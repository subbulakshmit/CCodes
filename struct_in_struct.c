#include <stdio.h>
#include <string.h>

struct DOB
{
    int yyyy;
    int mm;
    int dd;
};

struct Person
{
    char name[20];
    int age;
    struct DOB dob;
};

int main()
{
    // initialize variables and instance struct
    struct Person p;
    p.age = 12;
    printf("Enter the person's first name: ");
    scanf("%s", &p.name);
    printf("Enter the day, month and year of the DOB, space seperated: ");
    scanf("%d %d %d",
          &p.dob.dd,
          &p.dob.mm,
          &p.dob.yyyy);

    // print out some details
    printf("The person %s was born in the year %d.\n",
           p.name,
           p.dob.yyyy);
}