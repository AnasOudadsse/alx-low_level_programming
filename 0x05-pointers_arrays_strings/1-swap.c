/**
 * swap_int - swap two numbers
 * @a: first param
 * @b : second param
*/

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
