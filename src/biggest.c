/*
** EPITECH PROJECT, 2017
** EPITECH
** File description:
** finding the biggest number
*/

#include "my.h"

int **square(int **map, var_t *var)
{
	int i = var->x;
	int j = var->y;
	int k = var->l;
	int m = var->l;

	for (; k > 0; k--) {
		j = var->y;
		for (m = var->l; 0 < m; m--) {
			map[i][j] = -1;
			j--;
		}
		i--;
	}
	return (map);
}

int **biggest(int **map, var_t *var, int nb_lines, int len)
{
	int i = 0;
	int j = 0;

	var->l = 0;
	for (; i < nb_lines; i++)
		for (j = 0; j < len; j++) {
			if (map[i][j] > var->l) {
				var->x = i;
				var->y = j;
				var->l = map[i][j];
				}
			else
				j = j;
		}
	return (square(map, var));
}
