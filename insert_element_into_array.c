#include <stdio.h>

int main() {
    //initialize array and requisite variables;
    int array_1d[5] = {1,2,3,4,5};
    int n,element;

    //ask where to insert the new element
    printf("Where would you like to insert the new element(1-5): ");
    scanf("%d",&n);

    //get the new element
    printf("Enter the number to be inserted in the %dth position: ",n);
    scanf("%d",&element);

    //insert the element
    array_1d[n-1] = element;

    //print out the elements in order
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array_1d[i]);
    }
    
}