#include "main.h"
#include <stdio.h>
/*
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: printed numbers 0-14 10 times
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
			_putchar(j + '0');
		}
	_putchar('\n');
}
