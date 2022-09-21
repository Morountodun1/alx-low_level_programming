#include <stdio.h>

/**
 * main - Entry point
 * Return: (0) Sucess
 * @author Morountodun Adekoya
 */

int main(void)
{
	int lowercase_value = 122;

	while ((lowercase_value > 96) && (lowercase_value < 123))
	{
		putchar(lowercase_value);
		lowercase_value--;
	}
	putchar('\n');

	return (0);
}
