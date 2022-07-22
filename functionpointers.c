#include <stdio.h>

int add(int x, int y);
int difference(int x, int y);
int product(int x, int y);
int quotient(int x, int y);

int main(){
    //pointer to the add function
    int (*ptrtoadd) (int,int) = &add;

    printf("%d\n\n", (*ptrtoadd)(2, 3) );

    // array of functions using pointer
    int (*arr_functions[4]) (int, int);

    arr_functions[0] = &add;
    arr_functions[1] = &difference;
    arr_functions[2] = &product;
    arr_functions[3] = &quotient;

    //run them using a for loop on 2 inputs
    int a, b, val;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 0; i < 4; i++)
    {
        val = (*arr_functions[i])(a, b);
        printf("%d is the value for the %dth function\n", val, i);
    }
    


}
int add(int x, int y){
    return x+y;
}
int difference(int x, int y){
    return x-y;
}
int product(int x, int y){
    return x*y;
}
int quotient(int x, int y){
    return x/y;
}
