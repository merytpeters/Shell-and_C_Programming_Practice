#include <stdio.h>

int main()
{
	int b;
	float c;
	double d;
	char e;

	printf("Size of int: %zu bytes\n", sizeof(b));
	printf("Size of float: %zu bytes\n", sizeof(c));
	printf("Size of double %zu bytes\n", sizeof(d));
	printf("Size of char %zu bytes\n", sizeof(e));

	return (0);
}
