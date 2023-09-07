#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars then initializes it specific char
 * @size: size of the array
 * @c: char to assign
 * Return: a pointer to the array or NULL
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