#include <stdio.h>
#include "main.h"
/**
 * main - function that prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(i);
		_putchar('\n');
	}
}
