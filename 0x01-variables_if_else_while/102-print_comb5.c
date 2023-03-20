#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all possible different combinations
 * of two two digit numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, m;

	for (n = 0; n < 100; n++)
	{
		for (m = n; m < 100; m++)
		{
			if (n != m)
			{
				putchar (n / 10 + 48);
				putchar (n % 10 + 48);
				putchar (' ');
				putchar (m / 10 + 48);
				putchar (m % 10 + 48);
				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
