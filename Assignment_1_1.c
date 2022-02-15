/*Write a program to find the reverse of any number & check whether the number is a palindrome or not. */

#include <stdio.h>
int main()
{
	int n, num, rev = 0;
	printf("Enter an integer number:");
	scanf("%d", &n);
	num = n;

	while (num)
	{
		int rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	printf("The reverse of %d is %d\n", n, rev);
	if (n == rev)
		printf("palindrome");
	else
		printf("not palindrome");
	return 0;
}
