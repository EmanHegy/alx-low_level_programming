#include "main.h"

/**
 * *_strstr - function finds the first occurrence of needle
 * in string haystack
 *
 * @needle: input string 1
 * @haystack: input string 2
 *
 * Return: pointer to haystack
 */

char *_strstr(char *haystack, char *needle)
{

	char *c;
	int i, j;

	for (i = 0; haystack[i] >= '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				c = &haystack[i];
				return (c);
			}
		}
	}

	return (0);
}
