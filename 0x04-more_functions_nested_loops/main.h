#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints character
 * @n: character ascii value
 * @brief A function that prints character to
 *     stdout
 * Return: (void)
 * @file _putchar.c
 * @author Morountodun Adekoya
 */
void _putchar(int n);

/**
 * _isupper - check for uppercase letters
 * @c: the character to be checked.
 *
 * @brief A function that checks for uppercase letters
 * Return: (int) 1 if uppercase and 0 if not uppercase
 * @file 0-isupper.c
 * @author Morountodun Adekoya
 */
int _isupper(int c);

/**
 * _isdigit - check for digit
 * @c: the character to be checked.
 *
 * @brief A function that checks for digit
 * Return: (int) 1 if digit and 0 if not digit
 * @file 1-isdigit.c
 * @author Morountodun Adekoya
 */
int _isdigit(int c);

/**
 * mul - multiply two number
 * @a: first num to be multiplied
 * @b: second num to be multiplied
 *
 * @brief A function that multiplies two integers
 *     together and returns the result
 * Return: (int) the result of the multiplication
 * @file 2-mul.c
 * @author Morountodun Adekoya
 */
int mul(int a, int b);

/**
 * print_numbers - print 09
 * @brief A function that prints digit 0-9
 * Return: (void)
 * @file 3-print_numbers.c
 * @author Morountodun Adekoya
 */
void print_numbers(void);

/**
 * print_most_numbers - print 0-9
 * @brief A function that prints digit 0-9 except
 *     2 and 4
 * Return: (void)
 * @file 4-print_most_numbers.c
 * @author Morountodun Adekoya
 */
void print_most_numbers(void);

#endif /* MAIN_H */
