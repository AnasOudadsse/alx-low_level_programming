#include "main.h"
#include <ctype.h>

/**
* _isdigit - checks if c is a digit
* @c: the param to be checked
* Return: returns 1 if true and 0 if false
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
