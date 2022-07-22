#include <stdio.h>

int main(){
    //initialize array and pointer
    int arr[5] = {1,5,6,7,8};
    int *ptr = &arr[0];

    //traverse array using pointer arithmetic
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i) );
    }
}