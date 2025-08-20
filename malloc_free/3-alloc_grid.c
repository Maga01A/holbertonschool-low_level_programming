#include <stdlib.h>

/**
 * alloc_grid - iki boyutlu int dizisi oluşturur ve 0 ile başlatır
 * @width: dizinin sütun sayısı
 * @height: dizinin satır sayısı
 *
 * Return: pointer to 2D array, NULL başarısızlıkta veya width/height <= 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* malloc başarısız olursa daha önce ayırdığımız hafızayı serbest bırak */
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0; /* tüm elemanları 0 ile başlat */
	}

	return (grid);
}

