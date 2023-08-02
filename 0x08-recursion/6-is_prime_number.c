#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - this function make something
 * @n: input value
 * @o: input value
 * Return: 0
*/
int check_prime(int n, int o);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - this function do something
 * @n: input value
 * @o: input value
 * Return: 0
*/
int check_prime(int n, int o)
{
	if (o >= n && n > 1)
	{
		return (1);
	}
	else if (n % o == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, o + 1));
	}
}
