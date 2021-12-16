#include <stdio.h>
#include <stdlib.h>
// Checking the condition using 'if' statement

int main(){
	
	int num1, num2;
	printf("Enter the 2 numbers : ");
	scanf("%d %d", &num1, &num2);
	   if(num1==num2) // Condition is being checked
	     printf("True");
	   else
	     printf("False");
	 return 0;
}