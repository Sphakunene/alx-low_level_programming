#include "main.h"

/**
 * _strstr-function finds the first occurrence of the
 * substring needle in the string haystack
 *
 * @haystack: string containing substring
 * @needle: Substring
 * Return: pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int flag = 1;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == needle[i] && *(haystack + 1) == needle[i + 1])
			{
				flag = 0;
				return (haystack);
				break;
			}
		}
		if (flag == 0)
		{
			break;
		}
		haystack++;
	}
	return (0);
}
