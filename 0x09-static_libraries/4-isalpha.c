#include "main.h"

/**
 * _isalpha - check for alpahbet
 * @c: check the input
 * Return: 1 if it's true and 0 if wrong
*/
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
