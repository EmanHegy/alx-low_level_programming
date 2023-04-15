#include "main.h"

/**
 * *_memset - function fills the first n bytes of memory area
 * pointed to s with the constant byte b
 *
 * @s: pointer to starting byte
 * @b: the constant byte
 * @n: number bytes to fill
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		s[i] = b;
	}

	return (s);
}
