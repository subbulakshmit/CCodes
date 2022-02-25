#include<stdio.h>
int swap(int x,int y)
{
	int t;
	t = x;
	printf("The values of x,y and t after every step are as follows \n");
	printf("x = %d,  y= %d,  t=%d \n",x,y,t); 
	x=y;
	printf("x = %d,  y= %d,  t=%d \n",x,y,t); 
	y=t;
	printf("x = %d,  y= %d,  t=%d \n",x,y,t); 
	printf("Swapped values of a=x, b=y are as folows: %d \t %d \n",x,y); 	
	return(x,y);
}

int main()
{
	int a,b;
	printf("Please enter the values of a and b \n");
	scanf("%d %d",&a,&b);
	printf("Entered Input values of a, b: %d\t%d \n",a,b);	
	swap(a,b);
	printf("Values of a, b in main after swapping: %d\t%d \n",a,b);	
}



/* Do the same swapping for the two array elements */
/* Do the swapping for three elements sequentially one time / two times */ 
