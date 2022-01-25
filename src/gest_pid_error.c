/*
** EPITECH PROJECT, 2021
** gest_error
** File description:
** gest_error
*/

#include "navy.h"

int pid_error(char **av)
{
    int signal = my_getnbr(av[1]);

    if (signal <= 31)
        return (84);
    return (0);
}