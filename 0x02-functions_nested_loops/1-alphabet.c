#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints lowercase alphabet
 * @brief A function to that prints lowercase letters
 *     from a-z
 * Return: (void)
 * @file 1-alphabet.c
 * @author Morountodun Adekoya
 */
void print_alphabet(void)
{
	int lowercase_value;
	
	for (lowercase_value = 97; lowercase_value < 123; lowercase_value++)
	{
		_putchar(lowercase_value);
	}
	_putchar('\n');
}
