#include <stdio.h>

int main() {
    //initialize array with values, also declare
    int array[8] = {1,2,3,4,5,4,4,7};
    int count,element;

    //lets start by initializing a for loop
    for (int i = 0; i < 8; i++)
    {
        element = array[i];
        count = 0;

        //look for occurrences of "element" inside our array.
        for (int j = 0; j < 8; j++)
        {
            if(array[j] == element && array[j] != 0){
                count = count + 1;
                //we found an occurence, increase count by 1
                if(count > 1){
                    //if the element is a duplicate, set it to 0.
                    array[j] = 0;
                }
            }
        }
    }
    
    //print out the elements
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",array[i]);
    }
}