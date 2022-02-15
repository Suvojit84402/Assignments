/*W.A.P. to print all prime numbers between 1 and n. n will be given as input*/

#include <stdio.h>
int count_factors(int n)
{
	int factors = 0;
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			factors++;
	}
	return factors;
}
int main()
{
	int n, factors = 0;
	printf("enter the number ");
	scanf("%d", &n);
	int i;
	for (i = 2; i <= n; i++)
	{
		if (count_factors(i) == 0)
			printf("%d ", i);
	}
	return 0;
}
