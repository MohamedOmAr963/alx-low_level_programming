#include "main.h"

/**
 * _sqrt_recursion - this function do something of course
 * @n: input value
 * @val: input value
 * Return: 0
*/
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - this function make something too
 * @val: input value
 * @n: input value
 * Return: 0
*/
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
