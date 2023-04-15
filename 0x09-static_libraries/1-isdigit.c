#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function to check if c is digit or not
 *
 * @c: input for the function
 *
 * Return: 1 if the character is digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
