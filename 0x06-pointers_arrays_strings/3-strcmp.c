#include "main.h"

/**
 * _strncmp - function that compares two string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if true, 0 if false
*/

char *_strncmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (equal);
}
