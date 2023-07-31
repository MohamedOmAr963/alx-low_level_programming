#include "main.h"

/**
  *_memset - fille memory with a constant byte
  * @s: pointer to put the constant
  * @b: constant
  * @n: max byte to use
  * Return: pointer s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; n > 0; mem++, n--)
	{
		s[mem] = b;
	}
	return (s);

