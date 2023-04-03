#include "main.h"

/**
 * *_strchr - function finds the first occurrence of char in string
 *
 * @s: input string
 * @c: input character
 *
 * Return: pointer to s
 */

char *_strchr(char *s, char *c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
