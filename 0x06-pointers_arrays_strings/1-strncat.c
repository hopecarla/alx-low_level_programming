#include <stdio.h>
#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *@src: source string
 *@dest: the string to be returned
 *@n: number of characters in src
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int destlen = 0;
int srclen = 0;
int i;

for (i = 0; dest[i] != '\0'; i++)
	destlen++;
for (i = 0; src[i] != '\0'; i++)
	srclen++;
for (i = 0; i < n && src[i] != '\0'; i++)
	dest[destlen + 1] = src[i];
return (dest);
}
