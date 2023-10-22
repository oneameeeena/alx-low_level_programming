#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prototype main
 * @width: width
 * @height: height
 * Return: hk
 */
int **alloc_grid(int width, int height)
{
	int **hk;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	hk = malloc(sizeof(int *) * height);

	if (hk == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		hk[x] = malloc(sizeof(int) * width);

		if (hk[x] == NULL)
		{
			for (; x >= 0; x--)
				free(hk[x]);

			free(hk);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			hk[x][y] = 0;
	}

	return (hk);
}
