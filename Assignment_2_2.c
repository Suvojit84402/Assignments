/*Write a program to find minimum and maximum of an array*/

#include <stdio.h>
int main()
{
	int a[100] = {0}, i, max, min, n;
	printf("Input the number of elements to be stored:");
	scanf("%d", &n);
	printf("Input %d elements in the array:\n", n);
	for (i = 0; i < n; i++)
	{
		printf("element-%d : ", i + 1);
		scanf("%d", &a[i]);
	}
	max = a[0], min = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("Max value is: %d\n", max);
	printf("Min value is: %d\n", min);
	return 0;
}
