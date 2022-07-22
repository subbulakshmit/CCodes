#include <stdio.h>
#include <stdlib.h>

int main() {
    // declare pointer
    int *ptr;
    int x;
    //reserve memory space and assign to pointer

    ptr = (int*) malloc(4);
    //store value and print
    printf("Enter a value: ");
    scanf("%d",ptr);
    printf("THe value is %d",*ptr);
}