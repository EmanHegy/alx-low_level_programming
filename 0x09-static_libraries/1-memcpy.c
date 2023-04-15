#include "main.h"

/**
 * *_memcpy - function copies n bytes of memory area src to dest
 *
 * @src: source string
 * @dest: destination string
 * @n: number bytes to that are copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
