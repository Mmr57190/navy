/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_put_Unbr
*/

#include "my.h"

unsigned my_put_unbr(unsigned int nb)
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
        my_put_unbr(a / 10);
    my_putchar(a % 10 + '0');
    return (0);
}
