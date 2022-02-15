/*W.A.P. to check whether any number is a Armstrong number or not
(sum of the cubes of the individual digits is equal to the original number e.g. 153) */

#include <stdio.h>
//if the sum of the cube of the digits is that number, called Armstrong Number
int main()
{
	int n, a;
	printf("Enter the Number ");
	scanf("%d", &n);
	a = n;

	int num = 0;
	while (n)
	{
		int rem = n % 10;
		num += (rem * rem * rem);
		n /= 10;
	}
	if (num == a)
		printf("Armstrong Number");
	else
		printf("not an Armstrong Number ");
	return 0;
}
