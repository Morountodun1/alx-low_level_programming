#include <stdio.h>

/**
 * main - Entry point
 * Return: (0) Sucess
 * @author Morountodun Adekoya
 */

int main(void)
{
	int digit = 48;

	while ((digit > 47) && (digit < 58))
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
