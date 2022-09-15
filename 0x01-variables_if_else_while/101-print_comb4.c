#include <stdio.h>
/**
 *main- entry point
 *
 *Description : this program prints possible combination of
 *single digit number
 *Return: 0 always (success)
 */

int main(void)
{
	int ch;
	int i;
	int j;

	for (ch = '0' ; ch <= '7' ; ch++)
	{
		for (i = '0' ; i <= '8' ; i++)
		{
			for (j = '0' ; j <= '9' ; j++)
			{
				if ((ch != i && ch != j && j != i) && (ch < i && i < j))
				{
					putchar(ch);
					putchar(i);
					putchar(j);
					if (ch != '7' || i != '8' || j != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
