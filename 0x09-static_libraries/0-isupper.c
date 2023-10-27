#include "main.h"
#include <ctype.h>

/**
* _isupper - checks if c is uppercase or not
* @c : the character to be checked
* Return: return 1 if true and 0 if false
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
