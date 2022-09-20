#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	/* start from a */
	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
