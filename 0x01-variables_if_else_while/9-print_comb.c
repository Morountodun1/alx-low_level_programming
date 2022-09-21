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
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}

	putchar('\n');
	return (0);
}
