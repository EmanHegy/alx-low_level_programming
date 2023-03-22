#include <stdio.h>
#include "main.h"

/**
 * _islower - function to check if character is lowercase or not
 * @c: checked input of function
 *
 * Return: returns 1 if 'c' is lowercase
 * otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && <= 122)
		return (1);
	return (0);
}
