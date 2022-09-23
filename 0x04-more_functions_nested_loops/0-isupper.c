#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase letters
 * @c: the character to be checked.
 *
 * @brief A function that checks for uppercase letters
 * Return: (int) 1 if uppercase and 0 if not uppercase
 * @file 0-isupper.c
 * @author Morountodun Adekoya
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
