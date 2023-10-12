#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;

	char tem;
	int i;
	float f;
	char *s;

	va_start(list, format);

	while ((tem = *format) != '\0')
	{
		if (tem == 'c')
		{
			char c = va_arg(list, int);
			printf("%c", c);
		}
		else if (tem == 'i')
		{
			i = va_arg(list, int);
			printf("%d", i);
		}
		else if (tem == 'f')
		{
			f = va_arg(list, double);
			printf("%f", f);
		}
		else if (tem == 's')
		{
			s = va_arg(list, char*);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
	}
	
	}
	va_end(list);
	printf("\n");
}				
