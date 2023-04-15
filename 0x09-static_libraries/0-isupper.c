#include <stdio.h>
#include "main.h"

/**
 * _isupper - function to check if c is uppercase or not
 *
 * @c: input for alphabet
 *
 * Return: 1 if the character is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
