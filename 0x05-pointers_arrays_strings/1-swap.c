#include <stdio.h>
#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
