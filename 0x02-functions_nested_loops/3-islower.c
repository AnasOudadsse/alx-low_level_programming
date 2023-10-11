#include "main.h"
#include <ctype.h>
/**
* _islower - checks if a character is lowercase or not
* @c: the char to be checked
* Return: returns 1 if true and 0 if false
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
