#include<stdio.h>
int l=15,m=20; //Declaring 2 variables integer datatype } --> Global variable 
int function();
int main()
{
    int i_1 = 3,   i = 5 ; // Declaring 2 variables integer datatype           }
    float f_1 = 10.5,   f = 15.752 ; // Declaring 2 variables float datatype   } --> Local variables 
    char c_1 = 'a',   c = 'B' ; // Declaring 2 variables character datatype    }

    static int i_s = 3;
    static char c_s = 'A';  
	function();
    printf("%d",l);
	//printf("%d",x);
}
int function()
{
    int x=99; // Declaring a variable of integer datatype } --> Local variables
	printf("%d\n",m);    
}

