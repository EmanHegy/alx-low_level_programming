#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9 using _putchar
 *
 * Return: 0 (success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num < 10);
	_putchar('\n');
}
