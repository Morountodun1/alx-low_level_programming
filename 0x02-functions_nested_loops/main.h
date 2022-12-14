#ifndef MAIN_H
#define MAIN_H

/**
 * print_alphabet - prints lowercase alphabet
 * @brief A function to that prints lowercase letters
 *     from a-z
 * Return: (void)
 * @file 1-alphabet.c
 * @author Morountodun Adekoya
 */
void print_alphabet(void);

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
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * @brief A function that prints lowercase letters
 *     from a-z 10 times.
 * Return: (void)
 * @file 2-print_alphabet_x10.c
 * @author Morountodun Adekoya
 */
void print_alphabet_x10(void);

/**
 * jack_bauer - prints all the hour of the day
 * @brief A function that computes and returns
 *     the absolute value of an integer.
 * Return: (int) the last digit value of int
 * @file 8-24_hours.c
 * @author Morountodun Adekoya
 */
void jack_bauer(void);

/**
 * _islower - check for lowercase letters
 * @n: the character to be checked.
 *
 * @brief A function that checks for lowercase letters
 * Return: (int) 1 if lowercase and 0 if not lowercase
 * @file 3-islower.c
 * @author Morountodun Adekoya
 */
int _islower(int n);

/**
 * _isalpha - check for alphabetic letters
 * @n: the character to be checked.
 *
 * @brief A function that checks for alphabetic letters
 * Return: (int) 1 if is alphabet and 0 if not alphabet
 * @file 4-isalpha.c
 * @author Morountodun Adekoya
 */
int _isalpha(int n);

/**
 * print_sign - check for sign of int
 * @n: (int) the integer to be checked.
 *
 * @brief A function that checks for the sign of an
 *     integer.
 * Return: (int) 1 if is +, 0 if is zero and
 *     -1 if is -
 * @file 5-sign.c
 * @author Morountodun Adekoya
 */
int print_sign(int n);

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
int _abs(int n);

/**
 * print_last_digit - returns the last digit of int
 * @n: (int) the integer to be procesed.
 *
 * @brief A function that computes and returns
 *     the absolute value of an integer.
 * Return: (int) the last digit value of int
 * @file 7-print_last_digit.c
 * @author Morountodun Adekoya
 */
int print_last_digit(int n);

/**
 * add - adds two number
 * @a: first num to be added
 * @b: second num to be added
 *
 * @brief A function that adds two integers
 *     together and returns the result
 * Return: (int) the result of the addition
 * @file 10-add.c
 * @author Morountodun Adekoya
 */
int add(int a, int b);

#endif /* MAIN_H */
