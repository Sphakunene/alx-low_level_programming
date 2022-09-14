#include <stdio.h>
/**
 *main- entry point
 *
 *Description : this program prints  the alphabet in lowercase
 *except q and e
 *Return: 0 always (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		} else
		{
		putchar(ch);
		}
	}
putchar('\n');
return (0);
}
