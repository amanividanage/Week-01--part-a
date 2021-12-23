#include <stdio.h>
#include <stdlib.h>
// The program should print "divisible " if
// in each pair between the 3 numbers there is atleast one numberthat can be divided by three other - witout a remainder
int main(){
	
	int a,b,c ;
	     printf("Enter the 3 values: ");
	     scanf("%d %d %d", &a,&b, &c );
  	
	if (a== 0 || b==0 ||c==0)
	printf("cannot divide by zero! check the numbers again");
	
	else  if(a%b==0 || b%c==0 || c%a==0 )
    	printf("Divisible");
    else
	    printf("Indivisible");
  	
	return 0;
	
}