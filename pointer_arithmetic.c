#include <stdio.h>

int main(){
    //initialize variables, pointers
    int x, *intptr;  //4 bytes wide
    char z, *charptr;  //1 byte wide
    intptr = &x;
    charptr = &z;

    //print out pointers and some basic addition
    printf("%d %d %d\n\n",intptr, intptr+1, intptr+2);
    printf("%d %d %d\n\n",charptr, charptr+1, charptr+2);
}