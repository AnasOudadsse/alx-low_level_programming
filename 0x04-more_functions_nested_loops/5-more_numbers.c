#include "main.h"

/**
* more_numbers - print from 1 to 14 10 times
* Return: void
*/

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
