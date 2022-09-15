#include <stdio.h>
/**
 *main- entry point
 *
 *Description : this program print base 16 numbers
 *
 *Return: 0 always (success)
 */

int main(void)
{
	char ch;
	char i;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}
putchar('\n');
return (0);
}
