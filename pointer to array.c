// Pointer to array 
// program to print the array values using pointers
// program to print the address and value stored in the address

#include<stdio.h>
void main()
{
   int a[3] = {1, 2, 3};
   int *p = a;    
   int i;
   for ( i = 0; i < 3; i++)
   {
      printf("%d, \t %d \n", p, *p);
      p++;
   }
  //return 0;
}

// write a C program to define two arrays and two pointers to that arrays and print all the values 
// Write a C program to find the squre of fibonaaci numbers using the pointer to array program 
