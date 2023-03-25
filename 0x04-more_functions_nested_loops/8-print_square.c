#include <stdio.h>
#include "main.h"

/**
 * print_square - function prints a square using the char #
 *
 * @size: is the size of the square
 *
 * Return: 0 (success)
*/

void print_diagonal(int size);
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
