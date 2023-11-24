#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if the operation was successful, or -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
