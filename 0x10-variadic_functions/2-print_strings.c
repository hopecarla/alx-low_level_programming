#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of parameters to be passed in the function
 * @...: A variable number of strings to be printed.
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *a;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(strings, char *);

		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);
		if (i != (n - 1) && separator != NULL)
			printf("%s",separator);
	}
	printf("\n");
	va_end(strings);
}
