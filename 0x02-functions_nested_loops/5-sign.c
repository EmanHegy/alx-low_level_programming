#include <stdio.h>
#include "main.h"

/**
 * print_sign - function to check if n is positive , negative or zero
 *
 * @n: an integer input for the  function
 * Return: returns 1 if n is + , 0 if it is 0 , -1 if it is -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
