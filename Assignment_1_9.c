/*W.A.P. to find the factorial of any number*/

#include <stdio.h>

int main()
{
	int n, factorial = 1;
	printf("Enter the Number: ");
	scanf("%d", &n);
	int i;
	for (i = 1; i <= n; i++)
		factorial *= i;

	printf("factorial of %d is: %d", n, factorial);
	return 0;
}
