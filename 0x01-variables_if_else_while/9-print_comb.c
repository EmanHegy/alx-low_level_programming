#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 48);

		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');

	return (0);
}
