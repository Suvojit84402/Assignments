/*Write a program to count product of digits of an integer.*/

#include <stdio.h>
int main()
{
	int num, product = 1;
	printf("enter an integer");
	scanf("%d", &num);
	while (num)
	{
		int rem = num % 10;
		product *= rem;
		num /= 10;
	}
	printf("product of digits = %d", product);
	return 0;
}
