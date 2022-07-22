#include <stdio.h>
int main()
 {
    int i,n,c;
    
    printf("Input number of terms : ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
	 c = (i*i*i);
	 printf("Number is : %d and cube of the %d is :%d \n",i,i,c);     
    }
    return 0;
 }
 
