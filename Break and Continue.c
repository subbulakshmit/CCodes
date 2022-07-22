#include <stdio.h>
int main ()
{
	int b;
 	while (1)
 	{
		printf("Enter the number: ");
   		scanf("%d", &b);
   		if ( b == 0 )
   		{
    		break; // Breaks the loop and terminates if b==0
    	}
  	}
//----------------------------------
	int a,n;
	printf("\nEnter the range of number to print odd numbers: ");
	scanf("%d",&n);
	for (a = 0; a < n; a++)
	{
   		if ( a % 2 == 0 )
   		{
      		continue; // The loops skips the remaing parts of current iteration and goes to the next if a is divisible by 2
        }
      	printf(" %d \n",a);
  	}
 
return 0;
}

