#include <stdio.h>

int main()
{
	long b;
	long long c;
	long double d;

	printf("Size of long: %zu bytes\n", sizeof(b));
	printf("Size of long long: %zu bytes\n", sizeof(c));
	printf("Size of long double %zu bytes\n", sizeof(d));

	return (0);
}
