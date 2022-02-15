#include<stdio.h>
int fib(int n){
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else return fib(n-2)+fib(n-1);
}
int factorial(int num1){
	if (num1==0){
		return 1;}
	else if (num1==1){
		return 1;}
	else return num1*factorial(num1-1);
}

int main(){
	while(1){
	int a,n1,n2;
	printf("\nEnter your choice: \n");
	printf("\n1.Generate fibonacci number\n2.Factorial of any number\n");
	scanf("%d",&a);
	printf("Chosen option is: %d\n",a);
	switch(a){
		case 1: printf("Enter the n-th number of fibonacci series you want to generate: ");
				scanf("%d",&n1);
				printf("The %d-th fibonacci number is:\n%d" , n1,fib(n1-1));
				break;
			
		case 2: printf("Enter the number: ");
				scanf("%d",&n2);
				printf("The factorial of %d is: %d",n2,factorial(n2));
				break;
			
		default: printf("Wrong Choice!");
	}
	int t;
	printf("\nFor exit press any key,\n press 1 to continue. ");
	scanf("%d",&t);
	if (t==1)
	{
		continue;
	}
	else break;
	
}
	return 0;
}
