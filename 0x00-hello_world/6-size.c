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

	printf("Size of char: %i bytes\n", sizeof(charType));
	printf("Size of int: %i byte\n", sizeof(intType));
	printf("Size of long int: %i bytes\n", sizeof(longintType));
	printf("Size of long long int: %i bytes\n", sizeof(longlongintType));
	printf("Size of float: %i bytes\n", sizeof(floatType));
	return (0);
}
