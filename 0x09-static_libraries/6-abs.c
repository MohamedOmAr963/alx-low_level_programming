#include "main.h"
#include <math.h>

/**
 * _abs - get the absolute value of the integer
 * @n: to check the value of num
 * Return: always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
