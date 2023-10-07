#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int tens_digit1, ones_digit1, tens_digit2, ones_digit2;

	for (tens_digit1 = 0; tens_digit1 <= 9; tens_digit1++)
	{
		for (ones_digit1 = 0; ones_digit1 <= 9; ones_digit1++)
		{
			for (tens_digit2 = 0; tens_digit2 <= 9; tens_digit2++)
			{
				for (ones_digit2 = 0; ones_digit2 <= 9; ones_digit2++)
				{
					int num1 = tens_digit1 * 10 + ones_digit1;
					int num2 = tens_digit2 * 10 + ones_digit2;

					if (num1 < num2)
					{
						putchar(tens_digit1 + '0');
						putchar(ones_digit1 + '0');
						putchar(' ');
						putchar(tens_digit2 + '0');
						putchar(ones_digit2 + '0');

						if (tens_digit1 != 9 || ones_digit1 != 9 ||
							tens_digit2 != 9 || ones_digit2 != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
