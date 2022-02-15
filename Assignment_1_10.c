/*W.A.P. to find the sum of the following series :-
A.	 1/1!+2/2!+3/3!+…..upto 10 terms.
B.	Sine(x)
C.	Log(x)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float sum = 0;
	float x, y, z;
	int i, num, ch, sign = -1, fact = 1;
	printf("Enter your choice:\n");
	printf("\n1. 1/1!+2/2!+3/3!+...");
	printf("\n2. sin(x)");
	printf("\n3. log(x)\n");
	scanf("%d", &ch);
	printf("Enter the value range of the series for value calculation: ");
	scanf("%d", &num);

	switch (ch)
	{
	case 1:
		for (i = 1; i <= num; i++)
		{
			fact = fact * i;
			sum = sum + (i / fact);
		}
		printf("\nSum of the series 1/1!+2/2!+3/3!+... upto %d terms=%f", num, sum);
		break;
	case 2:

		printf("\nAngle in degree:");
		scanf("%f", &x);
		y = x * 3.14 / 180;
		sum = y;
		printf("Angle in radian=%f", y);
		for (i = 3; i <= num; i += 2)
		{
			fact = fact * i * (i - 1);
			sum = sum + sign * (pow(y, i) / fact);
			sign = -1 * sign;
		}
		printf("\nValue of the sin(%f)upto %d terms:%f", x, num, sum);
		break;
	case 3:

		printf("\nEnter the value of x for log(x):");
		scanf("%f", &x);
		z = (x - 1) / (x + 1);
		for (i = 1; i <= num; i = i + 2)
		{
			sum = sum + 2 * (pow(z, i)) / i;
		}
		sum = sum / 2.303;

		printf("\nValue of log(%f) upto %d terms:%f", x, num, sum);
		break;
	default:
		printf("wrong choice!");
	}
	return 0;
}
