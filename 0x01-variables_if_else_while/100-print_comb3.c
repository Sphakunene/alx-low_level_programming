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
	int ch;
	int i;

	for (ch = '0' ; ch <= '8' ; ch++)
	{
		for (i = '1' ; i <= '9' ; i++)
		{
			if (ch != i)
			{
				putchar(ch);
				putchar(i);
				if (ch != '8' || i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
