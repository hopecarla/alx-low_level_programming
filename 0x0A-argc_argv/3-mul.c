#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result;
	

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		return (1);
	}
	result = num1 * num2;
	printf("%d\n",result);
	return (0);
}
