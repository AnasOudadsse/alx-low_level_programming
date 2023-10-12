#include "main.h"

/**
* print_line - print lines
* @n: number of lines
* Return: void
*/

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
