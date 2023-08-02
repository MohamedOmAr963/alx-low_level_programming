#include "main.h"

/**
 * _strlen_recursion - this function give me the length of the string
 * @s: input value
 * Return: length
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
