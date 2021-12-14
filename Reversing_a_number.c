#include <stdio.h>
#include <stdlib.h>

int main(){
	int num , unit, tens, hundreds;
	printf("Enter your number:");
	scanf("%d" ,&num);
	unit=num%10;
	tens= (num/10)%10;
	hundreds = num /100;
	printf("%d%d%d", unit,tens,hundreds);
	return 0;
	
	
}
/*int main(){
	int num;
	int units, tens, hundreds;
	printf("Enter the number:");
	scanf("%d", &num);
	
	units= num % 10;
	tens = (num/10) % 10;
	hundreds = num /100;
	
	printf("The total sum of the digits is %d ", hundreds+tens+units);
	return 0;
}*/