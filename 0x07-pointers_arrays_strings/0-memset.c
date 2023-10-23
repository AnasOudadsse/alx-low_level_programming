#include "main.h"

/**
 * _memset - fills the memory pointed by s with the constant b n times
 * @s: the pointer where the b will be stocked
 * @b: the constant that will be stocked
 * @n: the number of b that will be stocked
 * Return: pointer to s
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
		s[i] = b;
	return (s);
}
