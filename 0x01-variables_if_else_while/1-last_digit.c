#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main- enrty point
 *
 * Return: always zero (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is grater than 5\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is greater than\n", n, n % 10);
	}
	return (0);
}
