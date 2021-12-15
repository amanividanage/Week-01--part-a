#include <stdio.h>
#include <stdlib.h>
// finding the maximum from three numbers

int main(){
	
	
	int num1, num2, num3, max, min;
	printf("Enter the 3 numbers :");
	scanf("%d %d %d ", &num1, &num2, &num3);
   
     max = num1;
     min = num2;
     if (num1<num2)
     {
     	max=num2;
     	min = num1;
     	
	 }
	 if(max< num3)
	   max= num3;
	   if (num3< min)
	     min= num3;
	     
	     printf("maximum number is %d \n", max);
	     printf("minimum number is %d", min);
	     
	     return 0;
}