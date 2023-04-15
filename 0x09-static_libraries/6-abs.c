#include <stdio.h>
#include "main.h"

/**
 * _abs - function that print the absolute value of the input number
 *
 * @n: an integer input for the function
 * Return: returns 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n *= (-1);
	return (n);
}
