/*
** EPITECH PROJECT, 2018
** bsq
** File description:
** one line file
*/

#include "my.h"

void line(char *file, int len)
{
	int i = 2;
	int k = 0;

	while (i < len + 2) {
		if (file[i] == '.' && k > 0) {
			my_putchar('.');
		}
		else if (file[i] == '.' && k == 0) {
			my_putchar('x');
			k++;
		}
		else if (file[i] == 'o') {
			my_putchar('o');
		}
		i++;
	}
	my_putchar('\n');
	exit(0);
}
