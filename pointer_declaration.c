#include <stdio.h>

int main() 
{
    // declare a variable
    int x = 12;
    // print its value
    printf("%d\n",x);
    //print its memory address;
    printf("%x %d\n",&x,&x);
    //store memory address in a pointer
    int *ptr = &x;
    //print value that the pointer references
    //done by affixing a * before the pointer name
    printf("%d",*ptr);
}