#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - functio pronts the sum of diagonals
 * of square matrix
 * @a : pointer pointing the memory address of array
 * @size : size of the array
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
