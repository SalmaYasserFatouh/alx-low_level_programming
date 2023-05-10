#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 * @othern: int
 * @n: int
 * Return: 0 or 1
*/

int chack_prime(int n, int othern);
int is_prime_number(int n)
{
return (chack_prime(n, 2));
}

/**
 * chack_prime - check all number < n if they can divide it
 * @n: int
 * @othrn: int
 * Return: int
*/

int chack_prime(int n, int othrn)
{
if (othrn >= n && n > 1)
	return (1);
else if (n % othrn == 0 || n <= 1)
	return (0);
else
	return (chack_prime(n, othrn + 1));
}
