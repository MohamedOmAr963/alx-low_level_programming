#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: checks input of functions
 * Return: 1 if the input lowercase and 0 if the input uppercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
