/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** back to char *
*/

#include "my.h"

char check(int **map, int i, int j)
{
	if (map[i][j] == -1)
		return ('x');
	else if (map[i][j] == 0)
		return ('o');
	else
		return ('.');
}

char **form2(int **map, char **end, int nb_lines, int len)
{
	int i = 0;
	int j = 0;

	end = malloc(sizeof(char *) * nb_lines + 1);
	for (i = 0; i < nb_lines; i++)	{
		end[i] = malloc(sizeof(char) * len + 2);
		for(j = 0; j < len; j++)
		{
			end[i][j] = check(map, i, j);
		}
		end[i][j] = '\n';
		j++;
		end[i][j] = '\0';
	}
//	i++;
//	end[i] = NULL;
	free(map);
	return (end);
}
