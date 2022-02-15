/*Write a program to find the G.C.D. of two numbers*/

#include<stdio.h>

int main(){
	int a, b, gcd=1;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
    int i;
	for(i=1; i<=a && i<=b; i++){
		if(a%i==0 && b%i==0)
			gcd=i;
		}

	
	printf("gcd = %d", gcd);
	return 0;
}

