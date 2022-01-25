/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** p_nb.c
*/

#include "../../include/my_p.h"

void print_nb(va_list list)
{
    my_put_nbr(va_arg(list, int));
}
