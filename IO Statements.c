#include <stdio.h>
int main()
{
	int i1,i2;
	printf("Enter 2 numbers :\n");
	scanf("%d",&i1); // input 1     } int -> " %d "
	scanf("%d",&i2); // input 2
	printf("The numbers are %d %d \n",i1,i2); 
	
	float f1,f2;
	printf("Enter 2 numbers :\n");
	scanf("%f%f",&f1,&f2); // input 1 & 2     } float -> " %f "
	printf("The numbers are %f %.2f \n",f1,f2);
	
}

