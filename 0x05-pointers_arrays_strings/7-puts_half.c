#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string to check
 * Return: returns the length
*/

int _strlen(char *s)
{
	int i;
	int counter;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;

	return (counter);
}

/**
 * puts_half - print the second half of a str
 * @str: the param to be printed
*/

void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 0)
	{
		for (i = _strlen(str) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (_strlen(str) - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
