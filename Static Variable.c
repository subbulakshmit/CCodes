#include<stdio.h>
int function()
{
   static int a = 1; // Remove static and include static and see the difference
    a=a+1;
    return a;
}
int main()
{
    printf(" %d\n ",function());
    printf("%d ",function());
}

