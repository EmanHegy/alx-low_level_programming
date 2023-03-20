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
	for (int n = 0; n < 10; n++)
	{
		for (int m = 0; m < 10; m++)
		{
			if (n < m)
			{
				purchar (n);
				purchar (m);
				if (n < 8 && m < 9)
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
