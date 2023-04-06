#include "main.h"

/**
 * is_prime_number - chek if n is a prime or not
 *
 * @n: int number.
 * @othrn: int number.
 *
 * Return: 0 or 1.
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all numbers less than n
 * if they can divide it
 *
 * @n: int number.
 * @othrn: int number.
 *
 * Return: int
*/

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
