#include <stdio.h>
#include "main.h"
/**
 * main  - function that prints the alphabet, in lowercase,
 * Return: 0
 */
void print_alphabet(void)
{
	prnt alphabet i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
