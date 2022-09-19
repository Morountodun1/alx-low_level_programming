#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main- Entry point
 * Description: Program that determines if number is positive or negative
 * Return: Always 0 (Success)
 */

int Main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
