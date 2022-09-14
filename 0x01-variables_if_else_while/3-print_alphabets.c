#include <stdio.h>
/**
 *main- entry point
 *
 *Description: using main function this program
 *prints lowercase and uppercase alphabet
 *
 * Return: 0 always for (Suceess)
 */

int main(void)
{
	char lowerCaseChar;
	char upperCaseChar;

	for (lowerCaseChar = 'a' ; lowerCaseChar <= 'z' ; lowerCaseChar++)
	{
		putchar(lowerCaseChar);
	}
	for (upperCaseChar = 'A' ; upperCaseChar <= 'Z' ; upperCaseChar++)
	{
		putchar(upperCaseChar);
	}
putchar('\n');
return (0);
}
