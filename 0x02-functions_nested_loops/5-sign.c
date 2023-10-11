#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: The number to check
 * Return: 1 if c is positive, 0 if c is zero, -1 if c is negative
 */
int print_sign(int c)
{
	if (c > 0)
{
		_putchar('+');
		return (1);
}
	else if (c == 0)
{
		_putchar('0');
		return (0);
}
	else
{
		_putchar('-');
		return (-1);
}
}
