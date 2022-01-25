/*
** EPITECH PROJECT, 2021
** gest_error
** File description:
** gest_error
*/

#include "navy.h"

int error_handle(opn *use)
{
    int max_error = gest_error(use);
    int map = gest_error_map(use);

    if (my_strlen(use->txt) != 31)
        return (84);
    if (map == 84 || max_error == 84)
        return (84);

    return (0);
}
