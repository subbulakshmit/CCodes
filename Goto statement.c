#include <stdio.h>  
int main()   
{  
	int i = 0;
    begin:  // 1st label
    	printf("i = %d\n", i);
    	i++;
    	
		if(i >= 10)
		{
			goto end;  // If i==10 it goes to (end) label
		} 				
    	
		goto begin; // When the program reaches this part it again goes to the begin label
    
	end: // 2nd label
    printf("End\n");
}

