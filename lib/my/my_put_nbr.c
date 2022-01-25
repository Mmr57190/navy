/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_put_nbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    long a = nb;

    if (a == 0) {
        my_putchar(0);
    }

    if (a < 0) {
        my_putchar('-');
        a = a * (-1);
    }

    if (a > 9)
        my_put_nbr(a / 10);
    my_putchar(a % 10 + 48);
    return (0);
}
