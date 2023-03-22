#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function to check if character is an alphabet or not
 * @c: checked input of function
 *
 * Return: returns 1 if 'c' is alphabet
 * otherwise always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && <= 122))
		return (1);
	return (0);
}
