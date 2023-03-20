#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all possible different combinations of three digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, m, l;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (l = 0; l < 10; l++)
			{
				if (n < m && m < l)
				{
					putchar (n + 48);
					putchar (m + 48);
					putchar (l + 48);
					if (n < 7 && m < 8 && l < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
