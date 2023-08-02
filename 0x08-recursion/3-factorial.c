#include "main.h"

/**
 * factorial - this function checks if the number > || < 0
 * @n: input value
 * Return: 0
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
