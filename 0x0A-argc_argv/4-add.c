#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	int num;
	char *ar;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	ar = argv[i];
	j = 0;

	while (ar[j] != '\0')
	{
		if (!isdigit(ar[j]))
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	num = atoi(ar);
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
