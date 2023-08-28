#include "main.h"
#include <stdio.h>
/**
 *  _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes of the memory area
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i;

	for (i = s; i < s + n; i++)
	{
		*i = b;
	}
	return (s);
}
