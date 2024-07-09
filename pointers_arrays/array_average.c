#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *marks, i, n, sum = 0;
	double average;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	marks = (int *) malloc(n * sizeof(int));
	for (i = 0; i < n; ++i)
	{
		printf("Enter number%d: ", i + 1);
		scanf("%d", &marks[i]);

	// adding integers entered by the user to the sum variable

	sum += marks[i];
	}

	// explicitly convert sum to double
	// then calculate average
	average = (double) sum / n;

	printf("Average = %.2lf", average);
	return (0);
}
