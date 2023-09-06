#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to a two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **box;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	box = malloc(sizeof(int *) * height);

	if (box == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		box[i] = malloc(sizeof(int *) * width);

		if (box[i] == NULL)
		{
			for (; i >= 0; i--)
				free(box[i]);
			free(box);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			box[i][j] = 0;
	}
	return (box);
}
