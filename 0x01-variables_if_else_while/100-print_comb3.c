#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all possible different combinations of two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n < m)
			{
				putchar (n + 48);
				putchar (m + 48);
				if (n != 8 && m != 9)
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
