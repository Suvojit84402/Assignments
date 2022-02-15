/*W.A.P. to Generate the number of divisor of any number.
 Check whether the number is a perfect number or not
 (sum of the divisors is equal to the original number)*/

#include <stdio.h>

int main()
{
	int n, sum = 0;
	printf("enter a number: ");
	scanf("%d", &n);

	printf("the divisors of %d : ", n);
	int i;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n");
	if (sum == n)
		printf("perfect number");
	else
		printf("not a perfect number");
	return 0;
}
