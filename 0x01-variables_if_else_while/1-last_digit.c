#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * description: 'get the last degiti of a number'
 * return: always 0
 */

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (y > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, y);
	}
	else
	{
	printf("Last digit of %d and is %d less than 6 and not 0\n", n, y);
	}
	return (0);
}