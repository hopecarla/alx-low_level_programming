#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @c: parameter to be checked
 * Return:  always c
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
