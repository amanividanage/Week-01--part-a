#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num , pow,i;
	printf("Enter the number :");
	scanf("%d", &num);
	printf("Enter the power :");
	scanf("%d", &pow);
	
	for(i=1;i<pow; i++){
		num=num*num;
	}
	
	printf("The answer is : %d", num);
	return 0;
}