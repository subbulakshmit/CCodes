#include <stdio.h>
#include <string.h>

void wait();

int main() {
    //declare a string
    char string_1[20] = "This is a string";

    //length of the string using strlen (16)
    printf("%d is the length.\n",strlen(string_1));
    wait();

    //uppercase version of the string
    strupr(string_1);
    printf("%s\n",string_1);
    wait();

    //lowercase version of string
    strlwr(string_1);
    printf("%s\n",string_1);
    wait();

    //compare strings
    char string_2[20] = "this is a string";
    if(strcmp(string_1,string_2) == 0){
        printf("They are the same!\n");
    }
    wait();


    char string_3[20] = "This may be a string";
    if (strcmp(string_1,string_3) == 0)
    {
        printf("They are the same\n");
    } else {
        printf("They are not the same\n");
    }
    wait();

    //add (concatenate) two strings
    char string_4[20] = "Hello ";
    char string_5[20] = "World!\n";
    strcat(string_4,string_5);
    printf("%s",string_4);
    wait();

    //copy a string into another one
    char string_6[20];
    strcpy(string_6,string_4);
    printf("%s",string_6);
    wait();

    //reverse a string
    strrev(string_6);
    printf("%s",string_6);

    //There are more string functions such as strncmp,strncat,strncpy
    //strcmpi,strstr,strchr,strset and so on.
}

void wait(){
    //wait for input
    char in;
    scanf("%c",&in);
}