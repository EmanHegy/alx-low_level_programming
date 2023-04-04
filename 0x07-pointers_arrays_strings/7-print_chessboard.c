#include "main.h"

/**
 * print_chessboard - function prints chessboard
 *
 * @a: input rows
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == accept[j])
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
