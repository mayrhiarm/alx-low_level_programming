#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: width of the input
 * @height: height of the input
 *
 * Return: nothing
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		c[w] = malloc(sizeof(int) * width);

		if (c[w] == NULL)
		{
			for (; w >= 0; w--)
				free(c[w]);

			free(c);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			c[w][h] = 0;
	}

	return (c);
}
