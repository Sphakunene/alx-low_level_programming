#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @n : first n byte
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: apointer to the memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
