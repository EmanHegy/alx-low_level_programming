#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all alphabet chars in lowercase then in uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	/* print a - z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';

	/* print A - Z */
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
