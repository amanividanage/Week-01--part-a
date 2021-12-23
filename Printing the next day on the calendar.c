#include <stdio.h>
#include <stdlib.h>

//Write a program that recieves a day, month and year. 
//The program should find and print the next day on the calendar

int main(){
	
	int year, month, day;
	printf("Enter the year :");
	    scanf("%d", &year);
	printf("Enter the month :");
    	scanf("%d", &month);
	printf("Enter the day :");
	    scanf("%d", &day);
	if(day>31 || month>12 )
	{
		printf("Invalid day");
	}
	
    if( month==12 && day==31 )
      {
	    year++;
	    month=1;
	    day=1;
	}
    else if( month % 2==0 && day==30 ){
	
       month++;
       day=1;
	   }
    else  if( month % 2 ==! 0  && day ==31)
      {
	   month++;
       day=1;
   }
	 
    else
       day++;
       
       printf(" %d   :  %d   : %d", year, month, day);
     
	   return 0;
	

	
}