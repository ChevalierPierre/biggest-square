/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Structures
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef __STRUCTURES__
#define __STRUCTURES__

typedef struct var
{
	int x;
	int y;
	int l;
}var_t;

void my_putchar(char);
void line(char *, int);
int lencar(int);
int my_strlen(char *);
int my_get_nbr(char *);
int **form(char *, int, int);
int number_len(int);
int **algo(int **, int, int);
int **biggest(int **, var_t *, int, int);
char **form2(int **, char **, int, int);

#endif
