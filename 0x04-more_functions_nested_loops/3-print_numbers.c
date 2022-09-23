#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 09
 * @brief A function that prints digit 0-9
 * Return: (void)
 * @file 3-print_numbers.c
 * @author Morountodun Adekoya
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
