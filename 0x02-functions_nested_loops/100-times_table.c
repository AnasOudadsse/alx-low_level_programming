#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: param
 * Return : void
*/

void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n < 0 || n > 15)
		return;
	if (n == 0)
		printf("%d", n);
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j == 0)
					printf("%d,", product);
				else if (j == n)
					printf("%4d", product);
				else
					printf("%4d,", product);
			}
		printf("\n");
		}
	}
}
