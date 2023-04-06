#include "main.h"

/**
 * _puts_recursion - function that prints a string, then new line.
 *
 * @s: pointer to string
 *
 * Retutn: nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
