#include <stdio.h>

/**
 * main- Entry point
 * Description: Program printing sizes of types on the computer
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %i byte(s)\n", sizeof(charType));
	printf("Size of an int: %i byte(s)\n", sizeof(intType));
	printf("Size of a long int: %i byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %i byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %i byte(s)\n", sizeof(floatType));
	return (0);
}
