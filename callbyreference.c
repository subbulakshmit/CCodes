#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	printf("%d %d %d \n",&a,&b,&t);
	printf("%d %d %d \n",a,b,t);
	*a=*b;
	printf("%d %d %d \n",&a,&b,&t);
	printf("%d %d %d \n",a,b,t);
	*b=t;
	printf("%d %d %d \n",&a,&b,&t);
	printf("%d %d %d \n",a,b,t);
}

int main()
{
	int x,y;
	printf("Enter the values of x and y: ");
	scanf("%d %d",&x,&y);
	printf("Entered Value : %d %d \n",x,y);
	swap(&x,&y);
	printf("Swapped Values : %d %d \n",x,y);
	return 0;
	
}

/* Do the same swapping for the two array elements */
