#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate the first occurrence of a character in a string
 * @s: The string to search in
 * @c: The character to locate
 *
 * Return: If the character is found, return a pointer to the first occurrence.
 * If the character is not found, return NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);

}
