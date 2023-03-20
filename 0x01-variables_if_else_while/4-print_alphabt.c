#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all alphabet chars in lowercase except q and e
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchr(ch);
		ch++;
	}
	putchar(ch);
	return (0);
}
