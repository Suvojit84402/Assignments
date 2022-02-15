/*Two numbers are entered  from keyboard, write a program to
 find the value of one number raised to the power of the another
  without using the  library function pow() */

#include<stdio.h>

int main(){
	int x, y,result=1;
	printf("Enter x : ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	int i;
	for(i=1; i<=y; i++){
		result*=x;
	}
	printf("%d", result);
	return 0;
} 

