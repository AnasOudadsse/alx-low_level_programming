#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints from n to 98
* @n: the number from the function starts
* Return: returns void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%2d, ", n);
			n++;
		}
		printf("%2d\n", 98);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%2d, ", n);
			n--;
		}
		printf("%2d\n", 98);
	}
	else
		printf("%2d\n", 98);
}
