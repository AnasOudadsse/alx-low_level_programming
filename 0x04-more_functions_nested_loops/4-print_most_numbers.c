#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9 2 and 4 excluded
* Return: void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 4 && i != 2)
			_putchar(i + '0');
	}
	_putchar('\n');
}
