#include <stdio.h>

//declare the functions that we will use
void hello_world();
int the_answer();
int add(int a, int b);


int chr2int(char n);

void wait();
//end of declared functions

int main() {
    //a function which does not return anything
    hello_world();
    wait();

    //a function which returns an integer
    int x = the_answer();
    printf("%d\n",x);
    wait();

    //a function which takes values and returns an integer
    int sum = add(2,3);
    printf("%d\n",sum);
    wait();

    //converts characters to integers!
    int a = chr2int('0'),b = chr2int('3');
    printf("%d %d\n",a,b);
    wait();

    //adding 2 converted characters
    int c = add(chr2int('2'), chr2int('3'));
    printf("%d\n",c);
    wait();

}

void hello_world(){
    printf("Hello World!\n");
}

int the_answer(){
    return 42;
}

int add(int a, int b){
    return a + b;
}

int chr2int(char n){
    return ((int) n) - 48;
}

void wait(){
    //wait for input
    char in;
    scanf("%c",&in);
}