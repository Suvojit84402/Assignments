/*Write a program to generate the fibonacci series for any given input.*/
#include <stdio.h>

int main()
{
	int n, a = 0, b = 1, c = 0;
	printf("Enter n: ");
	scanf("%d", &n);

	printf("%d %d", a, b);
	int i = 2;
	while (i < n)
	{
		c = a + b;
		printf(" %d", c);
		a = b;
		b = c;
		++i;
	}

	return 0;
}
