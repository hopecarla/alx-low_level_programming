#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @n: number of bytes to be copied
 * @src: memory area to be copied from
 * @dest: memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
