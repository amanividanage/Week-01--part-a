#include <stdio.h>
#include <stdlib.h>

// A program to check weather a given number is a double digit number or triple digit number

int main(){
	int number , count; 
	printf("Enter your number :");
	scanf("%d", &number);

 if (number>=10 && number<100)

   printf("The number entered is a double digit number");
 else if  ( number>99 && number< 1000)
   printf("The number entered is a triple digit number");
 else
     printf("The number is neither a double nor triple");
 
 
 return 0;
}