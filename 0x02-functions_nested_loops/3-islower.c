#include "main.h"
#include <stdio.h>

/**
 * _islower - check for lowercase letters
 * @n: the character to be checked.
 *
 * @brief A function that checks for lowercase letters
 * Return: (int) 1 if lowercase and 0 if not lowercase
 * @file 3-islower.c
 * @author Morountodun Adekoya
 */
int _islower(int n)
{
	if ((n > 96) && (n < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
