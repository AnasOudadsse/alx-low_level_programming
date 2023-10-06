#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: size
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	#ifdef __x86_64__
	printf("Size of a long double: %zu byte(s)\n", sizeof(long double));
	#else
	printf("Size of a double: %zu byte(s)\n", sizeof(double));
	#endif
	return (0);
}
