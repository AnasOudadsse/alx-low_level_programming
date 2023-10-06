#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	char letterUp = 'A';

	while (letter <= 'z')
{
		putchar(letter);
		letter++;
}
	while (letterUp <= 'Z')
{
	putchar(letterUp);
	letterUp++;
}
	putchar('\n');
	return (0);
}
