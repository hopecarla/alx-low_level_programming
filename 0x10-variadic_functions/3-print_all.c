#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *r, *s = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f",s, va_arg(list, double));
					break;
				case 's':
					r = va_arg(list, char *);
					if (!r)
						r = "(nil)";
					printf("%s%s", s, r);
					break;
				default:
					i++;
					continue;
			}
			s  = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
