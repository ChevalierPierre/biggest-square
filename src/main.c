/*
** EPITECH PROJECT, 2017
** EPITECH
** File description:
** main function of bsq
*/

#include "my.h"

void memo(char **end, char *field, var_t *var)
{
	free(end);
	free(field);
	free(var);
}

void display(char **end, int nb_lines, int len)
{	
	for (int j = 0; j < nb_lines ; j++) {
		write(1, end[j], len + 1);
	}
}

char *read_map(char *sas)
{
	struct stat st;
	char *file = NULL;
	int fd = open(sas, O_RDONLY);

	if (fd == -1 || fd == 0)
		exit(84);
	stat(sas, &st);
	file = malloc(sizeof(char) * st.st_size + 1);
	if (file == NULL)
		exit(84);
	read(fd, file, st.st_size);
	if (read(fd, file, st.st_size) == -1)
		exit(84);
	file[st.st_size] = '\0';
	if (st.st_size == 0)
		return (NULL);
	return (file);
}

int main(int ac, char **av)
{
	char *field = NULL;
	char **end = NULL;
	int nb_lines = 0;
	int **map = NULL;
	int len = 0;
	var_t *var = malloc(sizeof(*var));

	if (ac != 2)
		return (84);
	field = read_map(av[1]);
	if (field == NULL)
		return (0);
	nb_lines = my_get_nbr(field);
	if (nb_lines == 0)
		return (84);
	len = ((my_strlen(field) - lencar(nb_lines) - nb_lines - 1) / nb_lines);
	if (nb_lines == 1)
		line(field, len);
	map = form(field, nb_lines, len);
	map = algo(map, len, nb_lines);
	map = biggest(map, var, nb_lines, len);
	display(form2(map, end, nb_lines, len), nb_lines, len);
	memo(end, field, var);
	return (0);
}
