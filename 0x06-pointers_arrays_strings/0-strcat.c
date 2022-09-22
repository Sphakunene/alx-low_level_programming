#include "main.h"

/**
 *_strcat- function appends the string
 * @dest:string to be appended on
 * @src: string to be appended
 *Return: concatenates of the two strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *s1 = dest;
	char *s2 = src;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	return (s1);
}
