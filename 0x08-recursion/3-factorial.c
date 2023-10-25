#include "main.h"

/**
 * factorial - Calculate the factorial of a non-negative integer
 * @n: The integer for which to calculate the factorial
 * Return: The factorial of 'n' if 'n' is non-negative, -1 if 'n' is negative.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n *  factorial(n - 1));
}
