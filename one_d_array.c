#include <stdio.h>

int main() {
    //initialize array;
    int array_1d[5];
    
    for(int i = 0; i < 5; i++){
        printf("Enter value to be stored in the %dth index of the array: ",i);
        //use scanf function and pass the pointer to the ith elements index
        scanf("%d",&array_1d[i]);
    }

    //print out the elements in order
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array_1d[i]);
    }
    
}