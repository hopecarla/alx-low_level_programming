#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the character to fill the array
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
