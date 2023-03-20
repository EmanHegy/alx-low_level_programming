#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single  digits starting from 0 using putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 0);
		d++;
	}
	putchar('\n');

	return (0);
}
