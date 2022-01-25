/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** print_str
*/

#include "../../include/my_p.h"

void print_str(va_list list)
{
    my_putstr(va_arg(list, char *));
}
