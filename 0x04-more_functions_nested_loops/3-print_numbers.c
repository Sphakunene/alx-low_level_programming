#include <stdio.h>
#include "main.h"
/**
 *print_numbers- function prints numbers from 0-9
 *
 *
 *
 *Return: 0 always (success)
 */

void print_numbers(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
putchar('\n');

}
