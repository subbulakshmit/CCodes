#include <stdio.h>

void func();
int a = 10;

int main() {
    int i;
    for (i = 0; i < 5; i++)
    {
        /* code */
    }
    printf("%d",i);
    
}

void func(){
    a = a + 10;
}
