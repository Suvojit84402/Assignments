/*Write a program to find the L.C.M. of two numbers (without using the G.C.D.)*/

#include<stdio.h>

int main(){
	int a, b, lcm=1;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);

	int max= (a>b)? a: b;
	int multiple =max, i=1;
	while( ! (multiple%a==0 && multiple%b==0)){
		multiple = max * (++i);
	}
	printf("lcm = %d", multiple);
	return 0;
}

