#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string in reverse
 * @s: string to be printed in reverse
 * Return: string
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

_putchar('\n');
}
