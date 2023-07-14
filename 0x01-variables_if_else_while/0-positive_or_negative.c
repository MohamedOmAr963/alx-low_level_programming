#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'Check for number if it is positive or negative'
 * Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is nigative\n", n);
	}
	return (0);
}
