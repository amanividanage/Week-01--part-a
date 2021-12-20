#include <stdio.h>
#include <stdlib.h>

// A program to get the absolute value of a negative value

int main(){
   int num;
   printf("Enter the number :");
   scanf("%d", &num);
       if(num<0)
            printf(" The absolute value of the number is  %d", num *(-1));
       else 
       printf("The absolute value of the number is %d", num);
 return 0;
}