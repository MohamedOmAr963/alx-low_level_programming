#include "main.h"

/**
 * swap_int - this function swap two integers value
 * @a: this is the first integer value
 * @b: this is the secound integer value
*/
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
