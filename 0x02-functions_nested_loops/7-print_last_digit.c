#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - returns the last digit of int
 * @n: (int) the integer to be procesed.
 *
 * @brief A function that computes and returns
 *     the absolute value of an integer.
 * Return: (int) the last digit value of int
 * @file 7-print_last_digit.c
 * @author Morountodun Adekoya
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * (-1);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
