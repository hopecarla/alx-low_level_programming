#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;/* ignore *argv */
	if (argc  == '\0')
	{
		printf("%d\n", argc);
		++argc;
	}
	return (0);
}
