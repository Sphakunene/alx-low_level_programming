#include <stdio.h>
/**
 *main- entry point
 *
 *Description : this program prints psiible combination of
 *single digit number
 *Return: 0 always (success)
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');

		}
	}
putchar('\n');
return (0);
}
