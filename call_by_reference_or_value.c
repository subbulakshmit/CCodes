#include <stdio.h>

void swap(int *a,int *b);

int add(int a,int b);

int main() {
    int x = 10, y = 20;

    //swap x and y using a call by reference functions
    swap(&x,&y);
    printf("%d %d\n",x,y);

    //add x and y using a call by value function.
    int s = add(x,y);
    printf("%d\n",y);
    printf("%d\n",s);
}

void swap(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c; 
}

int add(int a,int b){
    b = a + b;
    return b;
}