#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13.
 * @n: input
 * Return: the value of n
 */
char *rot13(char *n)
{
	int i, j;
	char s1[] = "abcdefghijklm";
	char s2[] = "mlkjihgabcdef";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}

		}
	}
	return (n);
}
