/*
** EPITECH PROJECT, 2017
** EPITECH
** File description:
** change char* into int**
*/

#include "my.h"

int **form(char *str1, int nb_lines, int len)
{
	int i = 0;
	int j = 0;
	int k = lencar(nb_lines) + 1;
	int **str2 = malloc(sizeof(int *) * my_get_nbr(str1) + 1);;
	if (str2 == NULL)
		exit(84);

	while (str1[k] != '\0') {
		str2[i] = malloc(sizeof(int) * len + 1);
		if (str2[i] == NULL)
			exit(84);
		for (j = 0; str1[k] != '\n'; j++) {
			if (str1[k] == 'o') {
				str2[i][j] = 0;
			}
			else if (str1[k] == '.') {
				str2[i][j] = 1;
			}
			k++;
		}
		i++;
		k++;
	}
	return(str2);
}
