#include "main.h"

/**
 * binary_to_int - converts a binary string to an int
 * @b: the binary number as a string
 * Return: returns the int form of b
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b)
	{
		while (*b)
		{
			if (*b != '0' && *b != '1')
				return (0);
			num = num * 2 + (*b++ - '0');
		}
	return (num);
	}
	else
		return (0);
}
