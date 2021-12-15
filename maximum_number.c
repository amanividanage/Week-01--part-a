#include <stdio.h>
#include <stdlib.h>
// Checking the maximum number

int main(){
	
	int value1,value2;
	printf("Enter the values");
	scanf("%d %d", &value1, &value2);
	   if (value1>value2)
	   	printf("Value %d is greater than value %d", value1, value2);
	   
	   else 
	   printf("Value %d is greater than value %d", value2, value1);
	   
	   
	   
	   return 0;
	
}