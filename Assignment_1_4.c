/*Write a program to generate an integer Z whose odd position digit is the odd position
 digit of another integer X and even position digit is the even position digit of an integer Y.
 X and Y will be read as input from the keybord*/

#include <stdio.h>
int reverse(int num)
{
	int rev = 0;
	while (num)
	{
		int rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	return rev;
}
int main()
{
	int x, y, z, result = 0;
	printf("Enter x and y: ");
	scanf("%d %d", &x, &y);

	x = reverse(x);
	y = reverse(y);
	y /= 10;

	while (x || y)
	{
		int x_last = x % 10;
		result = result * 10 + x_last;
		x /= 100;

		int y_last = y % 10;
		if (y_last)
			result = result * 10 + y_last;
		y /= 100;
	}

	printf("resultant number = %d", result);
	return 0;
}
