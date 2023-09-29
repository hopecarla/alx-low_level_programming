#include "main.h"
/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: the number
 *  Return: 1, -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (_sqrt_recursion(n));
}
