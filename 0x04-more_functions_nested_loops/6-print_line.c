#include "main.h"
#include <stdio.h>
/**
 *print_line - function that draws a straight line in the terminal
 *@n: the number of lines to draw
 *Return: empty
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; n < i; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
