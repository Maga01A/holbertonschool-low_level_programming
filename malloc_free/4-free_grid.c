#include <stdlib.h>

/**
 * free_grid - iki boyutlu int dizisini serbest bırakır
 * @grid: serbest bırakılacak 2D dizi
 * @height: dizinin satır sayısı
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* her satırı free et */
	}

	free(grid); /* satır pointer’larını içeren diziyi free et */
}

