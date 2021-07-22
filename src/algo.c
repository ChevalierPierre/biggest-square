/*
** EPITECH PROJECT, 2017
** EPITECH
** File description:
** square algorithm
*/

#include "my.h"

int calc(int **map, int i, int j)
{
	if (map[i][j] == 0)
		return (0);
	if (map[i - 1][j - 1] <= map[i][j - 1]
	    && map[i - 1][j - 1] <= map[i - 1][j])
		return (map[i - 1][j - 1] + 1);

	if (map[i][j - 1] <= map[i- 1][j]
	    && map[i][j - 1] <= map[i - 1][j - 1])
		return (map[i][j - 1] + 1);

	if (map[i - 1][j] <= map[i - 1][j - 1]
	    && map[i - 1][j] <= map[i][j - 1])
		return (map[i - 1][j] + 1);
	else
		return (map[i][j]);
}


int **algo(int **map, int len, int nb_lines)
{
	int i = 1;
	int j = 1;

	for (; i < nb_lines; i++) {
		for (j = 1; j < len; j++) {
			map[i][j] = calc(map, i, j);
		}
	}
	return (map);
}
