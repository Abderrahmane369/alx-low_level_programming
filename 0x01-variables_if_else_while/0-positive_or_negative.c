#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
        /* your code goes there */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%lu is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%lu is negative\n", n);
	}
	else
	{
		printf("%lu is zero\n", n);
	}

	return (0);
}
