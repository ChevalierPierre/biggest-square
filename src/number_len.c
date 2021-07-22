/*
** EPITECH PROJECT, 2017
** EPITECh
** File description:
** length of an integer
*/

#include "my.h"

int number_len(int nb)
{
	int k = 0;

	if (nb == 0)
		k = 1;
	else {
		for (k = 0; nb == 0; k++) {
			nb = nb / 10;
		}
	}
	return (k);
}
