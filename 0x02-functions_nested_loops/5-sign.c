#include "main.h"
#include <stdio.h>

/**
 * print_sign - check for sign of int
 * @n: (int) the integer to be checked.
 *
 * @brief A function that checks for the sign of an
 *     integer.
 * Return: (int) 1 if is +, 0 if is zero and
 *     -1 if is -
 * @file 5-sign.c
 * @author Morountodun Adekoya
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
	}
	return (0);
}
