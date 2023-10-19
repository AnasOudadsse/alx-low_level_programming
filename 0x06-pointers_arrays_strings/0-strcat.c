#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: first param
* @src: second param
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\n'; i++)
		destlen++;
	for (i = 0; src[i] != '\n'; i++)
		srclen++;

	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
