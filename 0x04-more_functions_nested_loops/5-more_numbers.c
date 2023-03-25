#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function prints the numbers from 0 to 14 ten times
*/

void more_numbers(void);
{
	int num, dig, i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			dig = num;
			if (num < 10)
			{	_putchar(1 + 48);
				dig = num % 10;
			}
			_putchar(dig + 48);
		}
		_putchar('\n');
	}
}
