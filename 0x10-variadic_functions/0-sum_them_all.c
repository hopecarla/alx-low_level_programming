#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  Returns the sum of all its paramters
 * @n: number of parameters passed to the function
 * @...: A variable number of paramters to calculate the sum of
 * Return: 0; if n == 0
 *  Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers,int);
	va_end(numbers);
	return (sum);
}
