/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_put_short
*/

#include "my.h"

short my_put_short(int nb)
{
    int a = nb;

    if (a == 0) {
        my_putchar(0);
    }

    if (a < 0) {
        my_putchar('-');
        a = a * (-1);
    }

    if (a > 9)
        my_put_short(a / 10);
    my_putchar(a % 10 + 48);
    return (0);
}
