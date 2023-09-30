#include "main.h"
/**
 * is_prime_number - returns 1 if n is prime or 0 if not
 * @n:the integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number(n));
}
