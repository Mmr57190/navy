/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** p_c.c
*/

#include "../../include/my_p.h"

void print_cha(va_list list)
{
    my_putchar(va_arg(list, int));
}
