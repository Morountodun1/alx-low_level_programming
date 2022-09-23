#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for digit
 * @c: the character to be checked.
 *
 * @brief A function that checks for digit
 * Return: (int) 1 if digit and 0 if not digit
 * @file 1-isdigit.c
 * @author Morountodun Adekoya
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
