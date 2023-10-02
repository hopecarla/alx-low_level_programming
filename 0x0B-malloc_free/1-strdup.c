#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strdup - duplicate to new memory space allocation
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s1;
	size_t len = strlen(str);


	if (str == NULL)
	{
		return (NULL);
	}
	s1 = malloc(sizeof(char) * (len + 1));

	if (s1 == NULL)
	{
	return (NULL);
	}
	strcpy(s1, str);
	return (s1);
}
