/*
    A factorial can be defined as n! = 1*2*3*4......*n
    alternatively, we can also say, n! = n*(n-1)!
*/

#include <stdio.h>

int factorial(int n);

int main() {
    int n = 5;
    printf("Factorial of %d = %d", n, factorial(n));
    return 0;
}

int factorial(int n) {
    if(n < 3){
        return n;
    } else {
        return n*factorial(n-1);
    }
}