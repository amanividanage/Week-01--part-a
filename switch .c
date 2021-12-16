#include <stdio.h>
#include <stdlib.h>

//Using the switch case
int main(){
	
	char grade;
	printf("Enter your grade(A - D) : ");
	scanf("%c", &grade); //Specifying the case
	
	switch(grade)
	
{
   case 'A':
   	printf("Your marks are between 90-100\n");
   	break;
   	case 'B':
   			printf("Your marks are between 80-89\n");
   	break;
   	case 'C':
   			printf("Your marks are between 70-79\n");
   	break;
   	case 'D':
   			printf("Your marks are between 60-69\n");
   	break;	
   	default:
   		printf("Error");
}
}