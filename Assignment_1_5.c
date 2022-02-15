/*W.A.P. to check whether any number entered by the programmer is prime or not.*/

#include <stdio.h>

int main()
{
	int n, factors = 0;
	printf("enter an integer: ");
	scanf("%d", &n);
	int i, j;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			factors++;
	}
	if (factors >= 1 || n == 1)
		printf("not prime\n");
	else
		printf("prime\n");
	return 0;
}
