#include <stdio.h>
#include <stdlib.h>
// Printing the number of hours,minutes, seconds when the time is entered in seconds

int main(){
	
	int time, hours,minutes, seconds;
	printf("ENTER THE TIME IN SECONDS :");
	scanf("%d", &time);
	
	hours= time/3600; //calculating the number of hours 
	minutes = (time -3600) / 60;// calculating the number of minutes
	seconds= (time- 3600) % 60; //calculating the number of remaining seconds
	
	printf("%d : %d : %d ", hours, minutes, seconds);
	
return 0;
	
}