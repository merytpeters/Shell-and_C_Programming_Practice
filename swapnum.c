#include <stdio.h>

int main()
{
	double x, y, temp;

	printf("Enter x: ");
	scanf("%lf", &x);
	printf("Enter y: ");
	scanf("%lf", &y);

	temp = x;
	x = y;
	y = temp;

	printf("After swapping, x = %.2lf\n", x);
	printf("After swapping, y = %.2lf\n", y);

	return (0);
}
