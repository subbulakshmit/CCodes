#include <stdio.h>
int main () 
{
   int  value_array[] = {42, 366, 458, 112};
   int a, *point[4];
   printf("Array of pointers!\n\n");
   for(a=0;a<4;a++)
   {
    point[a]=&value_array[a]; 
    printf("value=>:%d\n",*point[a]);
   }
   for (a=0;a<4;a++)
   {
    printf("Value => var[%d]: %d\n", a, *point[a] );
   }
   return 0;
}

// Define char array , find the ASCII values and store the same in the second array and print both along with the addresses
// Defind a float array, Define a char array, store the items and price in both. get the total price of purchased items. 

