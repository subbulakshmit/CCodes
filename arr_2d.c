#include<stdio.h>
int main(){
   /* 2D array declaration*/
   // Syntax : type array_name[array_size_firstdimension][array_size_seconddimension];
   int twod_array[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for twod_array[%d][%d]:", i, j);
         scanf("%d", &twod_array[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", twod_array[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}

/* Insert the elements in all the odd numbered position of the array*/
/* Insert the elements in all the even numbered position of the array*/
/* Remove the elements from all the odd numbered position of the array*/
/* Remove the elements from all the even numbered position of the array*/
/* Search the given element in the array and print it's position*/
/* Check whether the array has non zero values in a position*/
/* Create one more ID array and compare the two ID arrays for values*/
/* Create one more ID character array and compare the two ID char arrays for values*/
/* Find the sum of all elements in an array*/
/* Find the maximum elements in an array*/
/* Find the minimum elements in an array*/
