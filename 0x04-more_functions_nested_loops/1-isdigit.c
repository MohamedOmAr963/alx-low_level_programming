#include "main.h"

/**
 *_isdigit - chrcks if input is digit between 0-9
 *
 * @c: input
 *
 *Return: 1 if its uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}