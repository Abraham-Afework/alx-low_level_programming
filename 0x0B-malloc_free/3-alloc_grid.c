#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array
 *
 * @width: This is the columns of the array
 * @height: This is the rows of the array
 *
 * Return:a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int j, i;
	int **array;

	if (width < 1 || height < 1)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}

	return (array);
}
