/*
** EPITECH PROJECT, 2017
** 
** File description:
** epitech
*/

#include "my.h"

int my_get_nbr(char *str)
{
        int sign = 1;
        int nbr = 0;
        int i = 0;

        while ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '\0') {
                i++;
        }
        while (str[i] == '-') {
                sign = (-1) * sign;
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0') {
                nbr = nbr * 10 + str[i] - 48;
                i++;
        }
        nbr = nbr * sign;
        return (nbr);
}
