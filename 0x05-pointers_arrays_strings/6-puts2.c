#include <stdio.h>
#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: string to be printed
 * Return: string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i += 2;
	}
}
