#include <stdio.h>
#include <stdlib.h>

// Displaying the quadrant of a point wheen the coordinates are entered
int main(){
	
	
	int x, y;
	printf("Enter the coordinates of the point :");
	scanf("%d %", &x, &y);
	
	if( x>0 && y>0)
	printf("First Quadrant");
	else if(x<0 && y>0)
	printf("Second Quadrant");
	else if(x<0 && y<0)
	printf("Third Quadrant");
	else
	printf("Fourth Quadrant");
	
	return 0;
}