#include <stdio.h>
#include <stdlib.h>

int main(){
    //initialize pointer and allocate space for array
    int *arrptr, *arrptr2;
    arrptr = (int*) malloc(5*4);
    arrptr2 = (int*) calloc(5,4);

    //add elements using addresses
    *arrptr = 1;
    *(arrptr + 1) = 2;
    *(arrptr + 2) = 3;

    *arrptr2 = 6;
    *(arrptr2 + 1) = 7;

    //add elements using indexes
    arrptr[3] = 4;
    arrptr[4] = 5;

    arrptr2[2] = 8;
    arrptr2[3] = 9;
    arrptr2[4] = 10;

    //print out stored values
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(arrptr + i));
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(arrptr2 + i));
    }
    
    //free the allocated memory
    free(arrptr);
    free(arrptr2);
}