#include "main.h"

/**
* alloc_grid - returns a pointer to a 2d array of integers
* @width: number of array columns
* @height: Number of array rows
* Return: Null if width or height are less than or equal to zero
*/

int **alloc_grid(int width, int height)
{
	int **board = NULL;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	else if (width > 0 && height > 0)
	{
		board = (int **) malloc(height * sizeof(int *));

		for (i = 0; i < height; i++)
			board[i] = (int *) malloc(width * sizeof(int));

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				board[i][j] = 0;
			}
		}
	}
	return (board);
}
