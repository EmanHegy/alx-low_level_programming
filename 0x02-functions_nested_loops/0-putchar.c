#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar using putchar prototpye
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_purchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
