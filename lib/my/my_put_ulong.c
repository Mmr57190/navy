/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_put_Unbr
*/

#include "my.h"

unsigned long my_put_ulong(unsigned long nb)
{
    unsigned long a = nb;

    if (a == 0) {
        my_putchar(0);
    }

    if (a > 9)
        my_put_ulong(a / 10);
    my_putchar(a % 10 + '0');
    return (0);
}
