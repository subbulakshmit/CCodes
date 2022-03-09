// pointer to function 
// pass the pointer argument as a function parameter 

#include <stdio.h>
void display(int *val);
int main()
{
   int a;
   display(&a);
   printf("Passing pointers to function!\n\n");
   printf("Value is: %d\n",a);
   return 0;
}
void display(int *val)
{
  *val = 30;
  return;
}

//Do the prefix and postfix assignment inside the function and print the values in the main for the pointer argument
// Do the Sin, Cos and Tan calculation of the values using the above method 
