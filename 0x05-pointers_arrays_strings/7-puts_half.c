#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string
 * @str: string to be printed
 * Return: string
 */
void puts_half(char *str)
{
int length = strlen(str);
int i;
int j;

if (length % 2 == 0)
{
	i = length / 2;
}
else
{
	i = (length - 1) / 2;
}
for (j = i; j < length; j++)
{
_putchar(str[j]);
}
}
