#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	char tenxalphabet = 0;
	char i;

	while (tenxalphabet < 10)
{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		tenxalphabet++;
}
}
