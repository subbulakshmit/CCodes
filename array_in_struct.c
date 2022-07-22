#include <stdio.h>

struct Classroom
{
    int classid;
    char teacher_name[20];
    char students[5][20];
};

int main()
{
    // initialize struct
    struct Classroom CSE;

    // intialize values
    printf("Enter the class id: ");
    scanf("%d", &CSE.classid);
    printf("Enter the teacher's first name: ");
    scanf("%s", &CSE.teacher_name);

    // use a for loop to enter student names
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of the %dth student: ", i + 1);
        scanf("%s", &CSE.students[i]);
    }

    // print out the details of the classroom
    printf("Class ID: %d\nClass Teacher: %s\nStudents:\n", CSE.classid, CSE.teacher_name);
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", CSE.students[i]);
    }
}