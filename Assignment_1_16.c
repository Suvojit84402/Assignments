/*Write the  basic  calculator program using switch case 
(only addition, subtraction, multiplication & divison)*/

#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("select : \n");
	printf("1. addition \n");
	printf("2. subtraction \n");
	printf("3. multiplication \n");
	printf("4. division \n");
	scanf("%d", &c);

	switch(c){
		case 1: printf("%d", a+b);
			break;
		case 2:	printf("%d", a-b);
			break;
		case 3: printf("%d", a*b);
			break;
		case 4: printf("%f", (float)a/b);
			break;

		default: printf("wrong choice");
	}
	return 0;
}

