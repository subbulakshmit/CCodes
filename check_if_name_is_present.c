#include <stdio.h>
#include <string.h>

int main(){
    //declare variables
    char names[5][20] = {"John","Claire","Ford","Prefect","Jake"};
    char name[20];
    int pos;

    //take input from user
    printf("Enter your full name: ");
    gets(name);

    //split by space
    for (int i = 0; i < strlen(name); i++)
    {
        if(name[i] == ' '){
            pos = i;
            break;
        }
    }
    
    char first_name[20];
    strcpy(first_name,name);
    first_name[pos] = '\0';

    //iterate through names comparing and checking for the name
    for (int i = 0; i < 5; i++)
    {
        if(strcmp(first_name,names[i]) == 0){
            printf("The first name %s is present in the list and the persons full name is %s.",first_name,name);
        }
    }
    
}