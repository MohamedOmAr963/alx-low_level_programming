#include "main.h"

/**
 * _puts - this function prints a string
 * @str: this is the value of the string
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
