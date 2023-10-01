#include <stdio.h>
#include "main.h"
/**
 * _strcat -  function that concatenates two strings
 * @dest: the string to return
 * @src: the source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; i <= destlen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
