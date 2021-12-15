#include <stdio.h>
#include <stdlib.h>

// Checking whether a number is odd or even
int main(){
     int n;
	 printf("Enter the number : ");
	 scanf("%d", &n);
	 if (n%2==0)	
	   printf("The number is even");
	   else
	   printf("The number is odd");
	   
	return 0;
	
}