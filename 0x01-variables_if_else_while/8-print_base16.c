#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int d = 48; /* 48 => 0 */

	while (d <= 102) /* 102 => f */
	{
		putchar(d);

		if (d == 57) /* after 9 go to 96 where 97 => a */
			d += 39;
		d++;
	}
	putchar('\n');

	return (0);
}
