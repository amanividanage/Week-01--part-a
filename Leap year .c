#include <stdio.h>
#include <stdlib.h>
//Checking whether a year is a leap year or not

int main(){
	
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);
	
	if( year % 400 == 0 )
	  printf("The year is a leap year");
	  
	else if (year % 100 == 0)
	  printf("This year is not a leap year");
	  
    else if (year % 4 == 0)
       printf("This year is a leap year");
       
    else 
    printf("This year is not a leap year");
    
    return 0;
	   
	
}