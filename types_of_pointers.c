#include <stdio.h>

int main(){
    //initialize pointers, variables
    int a=42, *intptr;
    char b='x', *charptr;
    float c = 3.1415, *floatptr;
    int *nullpointer = NULL;
    
    //assign values;
    intptr = &a;
    charptr = &b;
    floatptr = &c;
    printf("%d %c %f\n",*intptr,*charptr,*floatptr);

    //try getting input using a pointer
    printf("Enter a value: ");
    scanf("%d",&a);
    printf("%d is the value entered.",*intptr);
}