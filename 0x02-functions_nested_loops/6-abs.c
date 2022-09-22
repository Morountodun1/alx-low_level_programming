#include "main.h"
#include <stdio.h>

/**
 * _abs - returns absolute value of int
 * @n: (int) the integer to be procesed.
 *
 * @brief A function that computes and returns
 *     the absolute value of an integer.
 * Return: (int) the absolute value of int
 * @file 6-abs.c
 * @author Morountodun Adekoya
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
