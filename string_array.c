#include <stdio.h>
#include <string.h>


int main(){
    //2 ways to declare a string
    char hello_world[20] = {'H','e','l','l','o',' ','w','o','r','l','d','\n','\0'};
    char hello_world2[20] = "Hello world";

    //ways to print out a string
    printf("%s",hello_world);
    puts(hello_world2);

    //ways to get a user-input string
    char a_string[20];
    printf("Input a string: ");
    gets(a_string);
    //print out the string
    printf("%s",a_string);


}
