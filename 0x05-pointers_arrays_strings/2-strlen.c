#include "main.h"

/**
 * _strlen - this function return the length of a string
 * @s: this is the value of the integer
 * Return: Always len
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
