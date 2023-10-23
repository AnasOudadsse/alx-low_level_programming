#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The characters to search for
 * Return: If any character in accept is found in s return a pointer to the
 * first occurrence. If no character is found, return NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
