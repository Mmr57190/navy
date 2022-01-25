/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_find_prime_sup.c
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    for (; my_is_prime(nb) != 1; nb++);
    return (nb);
}
