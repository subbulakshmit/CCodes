#include <stdio.h>
int main()
{
  int i=0,n1,sum=0;
  printf(" Enter the number upto which you have to print: ");
   scanf("%d",&n1); 
  while (i<=n1) 
  {
    printf(" Value of i= %d\n", i);
    sum=sum+i;
    i++;   
  }
  printf(" Sum value - %d\n",sum);	
//----------------------------------------  
   int a,n;
   printf("\n Enter the range of number from which the number will be displayed\n in decending order : ");
   scanf("%d",&n);
   a = n;
   do
   {
      printf(" Value of a = %d \n",a); // Printing number from n to 0
      a--; 
   }
   while(a>0);
 
   return 0;
}
 
