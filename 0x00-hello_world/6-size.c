#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 *
 * Return: size
 */
int main(void)
{
#if __WORDSIZE == 64
	printf("64-bit system\n");
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
#else
	printf("32-bit system\n");
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
#endif

	return (0);
}
