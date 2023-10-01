#include <stdio.h>
#include "main.h"
/**
 *  _puts - function that prints a string
 *  @str: string to be printed
 *  Return: empty
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
