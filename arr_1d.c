#include<stdio.h>
int main()
{
   /* Single Dimensional - 1D array declaration*/
   // Syntax : type array_name[array_size];
   int oned_array[5];
   /*Counter variables for the loop*/
   int i ;
   for(i=0; i<5; i++) 
   {
   	printf("Enter value for oned_array[%d]:", i);
    scanf("%d", &oned_array[i]);
    }

   //Displaying array elements
   printf("Single Dimensional array elements:\n");
   for(i=0; i<5; i++) 
   {
    printf("%d ", oned_array[i]);
	}
    return 0;
}

// Insert one element into the array 
// Insert the given number of elements into the array 
/* Remove the duplicate elements in an array*/
/* Remove one element from the array */
/* Search the given element in the array and print it's position*/
/* Check whether the array has non zero values in a position*/
/* Create one more ID array and compare the two ID arrays for values*/
/* Create one more ID character array and compare the two ID char arrays for values*/
/* Find the sum of all elements in an array*/
/* Find the maximum number of elements in an array*/
/* Find the minimum number of elements in an array*/

