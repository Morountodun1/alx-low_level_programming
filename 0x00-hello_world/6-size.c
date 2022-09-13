#include <stdio.h>

/**
 * main- Entry point
 * Description: Program printing sizes of types on the computer
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int longintType;
	long long int longlongintType;

	printf("Size of int: %i bytes\n", sizeof(intType));
	printf("Size of char: %i byte\n", sizeof(charType));
	printf("Size of float: %i bytes\n", sizeof(floatType));
	printf("Size of long int: %i bytes\n", sizeof(longintType));
	printf("Size of long long int: %i bytes\n", sizeof(longlongintType));
	return (0);
}
