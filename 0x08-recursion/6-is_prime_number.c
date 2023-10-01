#include "main.h"
int prime_it_is(int n, int i);
/**
 * is_prime_number -  returns 1 if the input integer is a prime and 0 otherwise
 * @n: parameter to be checked
 * Return: 1 if n is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_it_is(n, n - 1));
}
/**
 * prime_it_is - calculates if a number is prime or not
 * @n: number to check
 * @i: iterator
 * Return: 1 if it is prime or 0 otherwise
 */
int prime_it_is(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_it_is(n, i - 1));
}
