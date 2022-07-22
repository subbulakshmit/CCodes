#include <stdio.h>

union Cat
{
    int age;
    char sex;
};

struct Cat_struct
{
    int age;
    char sex;
};

int main()
{
    // Instantiate the union and struct;
    union Cat fluffy;
    struct Cat_struct also_fluffy;

    printf("The size of the union is %d and the struct is %d\n",
           sizeof(fluffy),
           sizeof(also_fluffy));

    // Assign values
    fluffy.age = 12;
    fluffy.sex = 'M';
    printf("%d\n", fluffy.age);
    printf("%c\n\n", fluffy.sex);

    // Other order
    fluffy.sex = 'M';
    fluffy.age = 44;
    printf("%d\n", fluffy.age);
    printf("%c\n", fluffy.sex);
}
