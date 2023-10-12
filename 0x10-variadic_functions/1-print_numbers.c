#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed as arguments
 * @...:A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(list, int);
		printf("%d", num);

		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s",separator);
		}
	}

	printf("\n");
	va_end(list);
}
