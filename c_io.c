#include <stdio.h>
int main()
{
	char c;
	printf("Enter the character \n");
	scanf("%c",&c);
	printf("The character is %c \n",c);
	
	unsigned char c2;
	printf("Enter the unsigned character \n");
	scanf("%c",&c2);
	printf("The character is %c \n",c2);
	
	signed char c1;
	printf("Enter the signed character \n");
	scanf("%c",&c1);
	printf("The character is %c \n",c1);
	
	
	int a;
	printf("Enter an integer value \n");
	scanf("%d",&a);
	printf("The value entered by user is %d \n",a);
	
	
	short int a1;
	printf("Enter a short int value \n");
	scanf("%hi",&a1);
	printf("The value entered by user is %hi \n",a1);
	
	long int a2;
	printf("Enter a long int value \n");
	scanf("%ld",&a2);
	printf("The value entered by user is %ld \n",a2);
	
	unsigned int a3;
	printf("Enter a unsigned int value \n");
	scanf("%u",&a3);
	printf("The value entered by user is %u \n",a3);
	
	unsigned short int a4;
	printf("Enter an unsigned short int value \n");
	scanf("%hu",&a4);
	printf("The value entered by user is %hu \n",a4);
	
	unsigned long int a5;
	printf("Enter an unsigned long int value \n");
	scanf("%lu",&a5);
	printf("The value entered by user is %lu \n",a5);
	
	float a6;
	printf("Enter a float value \n");
	scanf("%f",&a6);
	printf("The value entered by user is %f \n",a6);
	
	char name[20];
	printf("Enter the name \n");
	scanf("%s",name);
	printf("Your name is %s \n",name);
	
	double d;
	printf("Enter the double value \n");
	scanf("%lf",&d);
	printf("The value entered by user is %lf \n",d);
		
	
	return 0;

	
}

// Enter the value which is in the range of the variable type and observe the output
// Enter the value which is not in the range of the variable type and observe the output
// Enter the value which is in the having a different variable type and observe the output / error 


