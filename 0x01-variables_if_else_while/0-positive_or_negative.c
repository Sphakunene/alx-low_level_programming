#include <stdlib.h>
#include <time.h>
/** 
 *main- entry point
 *this program assign n a random number
 *if statement evaluate if number is greater than 0
 *else if evaluate if number n is equal to 0
 *else is evaluated is nunber is less than zero
 *Return: Always 0 (Successs)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d, is positive /n", n);
	} else if (n == 0)
	{
		printf("%d, is equal to zero /n", n);
	} else
	{
		printf("%d, is negative/n", n);
	}
	return (0);

}
