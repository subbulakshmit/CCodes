#include <stdio.h>

void wait();


int main(){
    //declare variables and pointers intialize values
    int x[3] = {1,2,3};
    int *y,**z;

    y = &x[0];
    z = &y;

    //find x[0] using the pointers;
    printf("%d %d\n", *y, **z);
    wait();

    //print the value of y, the pointer to x[0]
    printf("%x %x\n",y,*z);
    wait();

    //increase value of y by 4 bytes. print value with **z
    y = y+1;
    printf("%d\n",**z);
    wait();

    //print last value in array
    printf("%d\n",*((*z)+1));
    wait();


}

void wait(){
    char a;
    scanf("%c",&a);
}