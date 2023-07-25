#include "main.h"

/**
 * *_strcpy - copy the pointed to by src to dest
 * @dest: the new pointed
 * @src: the original pointed
 * Return: Always dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
