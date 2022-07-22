#include <stdio.h>

int main(){
    //intialize variables
    int a = 3, b = 4, c = 5;
    int *ptrarr[3];

    //set array elements
    ptrarr[0] = &a;
    ptrarr[1] = &b;
    ptrarr[2] = &c;

    //print out array elements

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *ptrarr[i]);
    }
    

}