#include <stdio.h>
#include "main.h"
/**
 *main- entry point
 * Return: 0
 */

int main(void)
{
	int i;
	for (i = 1; i <= 100 ; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		} else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		} else if (i % 3 ==0)
		{
			printf("%s ", "Fizz");
		} else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
