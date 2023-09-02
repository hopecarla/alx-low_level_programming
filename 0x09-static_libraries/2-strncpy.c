#include "main.h"
 #include <stddef.h>
/**
 * _strncpy -  function that copies a string
 * @dest: string to be returned
 * @src: source string
 * @n: number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
