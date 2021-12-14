#include <stdio.h>
#include <stdlib.h>
// Checking wether pass or fail

int main(){
	
	int marks;
	printf("Enter the marks");
	scanf("%d", &marks);
	   if (marks>60)
	   	printf("Congradulations! You have passed");
	   
	   else 
	   	printf("Fail");
	   
	   
	   return 0;
	
}