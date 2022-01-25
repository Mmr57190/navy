/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_compute_square_root.c
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int i = 0;

    for (; i * i != nb; i++);
    return (i);
}
