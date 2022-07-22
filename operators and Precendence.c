#include <stdio.h>
int main()
{                
int a=2,b=3;
printf("Prints 0 if false a>b: %d\n ",a>b); // Relational operators
printf("Prints 1 if true a<=b: %d\n",a<=b);
printf("Prints 0 if false a==b: %d\n ",a==b);
printf("Prints 1 if true a!=b: %d\n",a!=b);

int output;
output=(a-b)*(a+b*a)+a/b;  // Arithmetic Operators
             //first precedence given to (), followed by / , * and +
printf("output is = %d\n ",output);   //displaying output

int x=2,y=3;
++x; // x=3			//Unary Increment operator
y++; // y=3
printf("New x=%d New y=%d \n",x,y); // x=3 , y=4
x--; // x=3			// Unary Decriment operator
--y; // y=3
printf("New x=%d New y=%d \n",x,y); // x=2 , y=3

int l=5,m=6;
(l<=5)? printf("True\n"): printf("False\n"); // Conditional operator

(l==5&&l<5)? printf("True\n"): printf("False\n"); // Logical AND in ?:

(l==5 || l<5)? printf("True\n"): printf("False\n"); // Logical OR in ?:
 
return 0;

}

