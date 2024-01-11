#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @needle: substring
 * @haystack: string
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *m = needle;

		while (*h == *m && *m != '\0')
		{
			h++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (NULL);
}
