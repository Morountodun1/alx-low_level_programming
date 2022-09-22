#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * @brief A function that prints lowercase letters
 *     from a-z 10 times.
 * Return: (void)
 * @file 2-print_alphabet_x10.c
 * @author Morountodun Adekoya
 */
void print_alphabet_x10(void)
{
	int lowercase_value;
	int i;

	for (i = 0; i < 10; i++)
	{

		for (lowercase_value = 97; lowercase_value < 123; lowercase_value++)
		{
			_putchar(lowercase_value);
		}
		_putchar('\n');
	}
}
