#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] >= 'a' && n[i] <= 'z')
	{
		n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
