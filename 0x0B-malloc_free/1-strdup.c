#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s1;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	s1 = malloc(sizeof(char) * (i + 1));

	if (s1 == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
		s1[j] = str[j];
	return (s1);
}
