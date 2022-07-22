#include <stdio.h>

int main() {
    //declare a two-dimensional array
    int array_2d[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for the element at the index (%d,%d): ",i,j);
            //store the values
            scanf("%d",&array_2d[i][j]);
        }
        
    }
    printf("\n");
    //print out the values
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",array_2d[i][j]);
        }
        //newlines between rows
        printf("\n");
    }
    
}