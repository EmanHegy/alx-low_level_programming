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
	char c;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c = &s[i];
				return (c);
			}
		}
	}

	return (0);
}
