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
	for (int n = 0; n < 10; n++)
	{
		for (int m = 0; m < 10; m++)
		{
			for (int l = 0; l < 10; l++)
			{
				if (n < m && m < l)
				{
					purchar (n);
					purchar (m);
					purchar (l);
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
