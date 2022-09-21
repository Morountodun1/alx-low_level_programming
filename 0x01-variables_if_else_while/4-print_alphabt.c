#include <stdio.h>

/**
 * main - Entry point
 * Return: (0) Sucess
 * @author Morountodun Adekoya
 */

int main(void)
{
	int lowercase_value = 97;

	while ((lowercase_value > 96) && (lowercase_value < 123))
	{
		if ((lowercase_value != 101) && (lowercase_value != 113))
		{
			putchar(lowercase_value);
		}
		lowercase_value++;
	}
	putchar('\n');

	return (0);
}
