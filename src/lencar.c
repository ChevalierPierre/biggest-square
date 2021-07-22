/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** length of number of characters
*/

#include "my.h"

int lencar(int nb_lines)
{
	int i = 0;

	while (nb_lines > 0) {
		i++;
		nb_lines = (nb_lines / 10);
	}
	return (i);
}
