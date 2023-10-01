#include "main.h"
#include <stdio.h>
/**
 *_isupper -checks if a letter is uppercase
 *@c: parameter to be checked
 *Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
