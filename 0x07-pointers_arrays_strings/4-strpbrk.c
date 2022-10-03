#include "main.h"

/**
 *_strpbrk - function locates first occurence of the string
 *
 * @s: pointer to char
 * @accept: pointer argument
 * Return: pointer to a byte
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i;
		int flag = 1;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
				flag = 0;
				break;
			}
		}
		if (flag == 0)
		{
			break;
		}
		s++;
	}
	return (s);
}
