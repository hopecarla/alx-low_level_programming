#include "main.h"
#include <string.h>
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: string to be printed
 * Return: the string
 */
void _puts_recursion(char *s)
{
	int length = strlen(s);

	if (s != '/0')
		_puts_recursion(s);
	return (s);
}
