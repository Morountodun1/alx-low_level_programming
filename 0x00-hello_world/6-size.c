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

	printf("Size of int: %ld bytes\n", sizeof(intType));
	printf("Size of char: %ld byte\n", sizeof(charType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of long int: %1d bytes\n", sizeof(longintType));
	printf("Size of long long int: %1d bytes\n", sizeof(longlongintType));
	return (0);
}
