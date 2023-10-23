#include "main.h"

/**
 * _strspn - Get the length of a prefix substring that consists of
 *            characters present in 'accept'.
 * @s: The main string to search
 * @accept: The characters to match in 's'
 * Return: The number of characters in s that match any character in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int counter = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != ' '; j++)
		{
			if (s[i] == accept[j])
				counter++;
		}
	}
	return (counter);
}
