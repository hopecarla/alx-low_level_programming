#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  prints strings
 * @separator: string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *s;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
