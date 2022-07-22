#include <stdio.h>
int main()
{
	int a; // 1 byte
	printf("Enter an integer value \n");
	scanf("%d",&a);
	printf("The value entered by user is %d \n",a);
	
	float f; // 4 bytes
	printf("Enter a float value \n");
	scanf("%f",&f);
	printf("The value entered by user is %f \n",f);
	
	char ch = 'A'; // 1 byte
	printf("\nThe character is %c \n",ch);
	
	double d; // 8 bytes
	printf("\nEnter the double value \n");
	scanf("%lf",&d);
	printf("The value entered by user is %lf \n",d);
	
	long l; // 4 bytes
	printf("\nEnter the long value \n");
	scanf("%li",&l);
	printf("The value entered by user is %li \n",l);
	
	short int a1; // 2 bytes
	printf("Enter a short int value \n");
	scanf("%hi",&a1);
	printf("The value entered by user is %hi \n",a1);
	
	long int li; // 4 bytes
	printf("Enter a Long int value \n");
	scanf("%ld",&li);
	printf("The value entered by user is %ld \n",li);
    
	return 0;
	
}
