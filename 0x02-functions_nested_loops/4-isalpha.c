#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check for alphabetic letters
 * @n: the character to be checked.
 *
 * @brief A function that checks for alphabetic letters
 * Return: (int) 1 if is alphabet and 0 if not alphabet
 * @file 4-isalpha.c
 * @author Morountodun Adekoya
 */
int _isalpha(int n)
{
	if (((n > 96) && (n < 123)) || ((n > 64) && (n < 91)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
