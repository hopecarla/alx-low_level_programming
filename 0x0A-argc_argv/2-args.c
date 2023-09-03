#include "main.h"
#include <stdio.h>
/**
 * main -  prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	for (argc = 0; argc != '\0'; argc++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
