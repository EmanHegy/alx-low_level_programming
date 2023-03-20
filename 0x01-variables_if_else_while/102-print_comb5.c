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
	for (int n = 0; n < 100; n++)
	{
		for (int m = n; m < 100; m++)
		{
			if (n != m)
			{
				purchar (n / 10);
				purchar (n % 10);
				purchar (' ');
				purchar (m / 10);
				purchar (m % 10);
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
