#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letterLow = 'a';

	while (letterLow <= 'z')
{
		if (letterLow == 'q' || letterLow == 'e')
			continue;

		putchar(letterLow);
		letterLow++;
}
	putchar('\n');
	return (0);
}
