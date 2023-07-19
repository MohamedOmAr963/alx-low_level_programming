#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: get the last digit of num
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int z;

	if (n < 0)
	{
		z = -1 * (n % 10);
	}
	else
	{
		z = n % 10;
	}
	_putchar(z + '0');
	return (z);
}
