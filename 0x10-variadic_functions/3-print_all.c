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
	char *p, *m = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", m, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", m, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f",m, va_arg(list, double));
					break;
				case 's':
					p = va_arg(list, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", m, p);
					break;
				default:
					i++;
					continue;
			}
			m  = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
