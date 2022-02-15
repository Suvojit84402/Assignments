/*Write a program to write a menu driven program where the program will ask for options from the users and compute the following:
 if user selects “ compound interest “  the program will ask for  p,r,n and computes  compound interest and prints the total amount 
  at end of each year starting from 1 to n.   If the user selects “interest” ,the program will ask for P, n, A
 (total amount at the end of n-th year) and computes the interest rate.*/

#include<stdio.h>
float interest(float p, float r){
	return (p*r)/100;
}
int main(){
	int a;
	printf("select : \n");
	printf("1. compound interest \n");
	printf("2. interest \n");
	scanf("%d", &a);

	float p, r, amt=0;
	int n;
	switch(a){
	case 1:
		printf("Enter principal: ");
		scanf("%f", &p);
		printf("Enter rate of interest: ");
		scanf("%f", &r);
		printf("Enter time in years : ");
		scanf("%d", &n);
		int i;
		for(i=1; i<=n; i++){
			amt = p+ interest(p, r);
			printf("total amount at the end of %d year = %f  \n", i, amt);
			p=amt;
		}
		break;
	case 2:
		printf("Enter principal: ");
		scanf("%f", &p);
		printf("Enter total amount: ");
		scanf("%d", &amt);
		printf("Enter time in years : ");
		scanf("%d", &n);
		float si = p-amt ; 
		r= (si* 100)/(p*n);
		printf("interest rate = %f", r);
		break;
	default:
		printf("wrong choice");

	}
	return 0;
}	 	 

