#include <unistd.h>
#include "main.h"

/**
 * _putchar - Entry main
 * @c: the char
 * Return: Always 1 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
