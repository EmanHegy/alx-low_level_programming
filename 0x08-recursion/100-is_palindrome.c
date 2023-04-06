#include "main.h"

/**
 * last_index - return the last index of the string even the null char.
 *
 * @s: pointer to sting.
 *
 * Return: int
*/

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - check if string is a palindrome or not
 *
 * @s: pointer to string
 *
 * Return: 0 or 1.
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for palindrome
 *
 * @s: pointer to string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @mod: integer number
 *
 * Return: 0 or 1.
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
