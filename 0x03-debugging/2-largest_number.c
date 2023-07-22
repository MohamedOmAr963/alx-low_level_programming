#include "main.h"

/**
 * largest_number - returns the largest of 3 num
 * @a: first
 * @b: sec
 * @c: third
 * Return: largest num
*/
int largest_number(int a, int b, int c)
{
	int larg;

	if (a > b && a > c)
	{
		larg = a;
	}
	else if (a > b && c > a)
	{
		larg = c;
	}
	else if (b > c)
	{
		larg = b;
	}
	else
	{
		larg = c;
	}
	return (larg);
}
