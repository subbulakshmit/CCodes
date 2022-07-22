#include <stdio.h>
int main() 
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
 
   if (year % 400 == 0)
   {
      printf("%d It is a century leap year.", year);
   }
   else if ((year % 100 == 0)&&(year % 400 !=0))
   {
      printf("%d is a century year but not a leap year.", year);
   }
   else if ((year % 4 == 0)&&(year % 100!=0))
   {
      printf("%d is a leap year but not a century year.", year);
   }
   else 
   {
      printf("%d is neither a leap year nor a century year.", year);
   }
   return 0;
}
