/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_is_prime.c
*/

#include "my.h"

int my_is_prime(int nb)
{
    int i;
    int p = 0;

    for (i = 1; i <= nb; i++) {
        if (nb % i == 0)
            p++;
    }
    if (p == 2)
        return (1);
    return (0);
}

