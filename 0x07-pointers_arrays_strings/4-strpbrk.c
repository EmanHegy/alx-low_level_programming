#include "main.h"

/**
 * *_strpbrk - function locates the first occurrence of char in string
 * of any of bytes in accept
 *
 * @s: input string 1
 * @accept: input string 2
 *
 * Return: pointer to the matched byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *c;
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c = &s[i];
				return (c);
			}
			j++;
		}
		i++;
	}

	return (0);
}
