#include <stdio.h>

/**
 * main - Entry point
 * Return: (0) Sucess
 * @author Morountodun Adekoya
 */

int main(void)
{
	int digit = 48;
	int digit2 = 97;

	while ((digit > 47) && (digit < 58))
	{
		putchar(digit);
		digit++;
	}

	while ((digit2 > 96) && (digit2 < 103))
	{
		putchar(digit2);
		digit2++;
	}

	putchar('\n');
	return (0);
}
