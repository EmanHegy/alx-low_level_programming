#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all single digit starting from 0
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	printf("\n");
	return (0);
}
