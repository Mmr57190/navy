/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_put_Ushort
*/

#include "my.h"

unsigned short my_put_ushort(unsigned int nb)
{
    unsigned int a = nb;

    if (a == 0) {
        my_putchar(0);
    }

    if (a > 9)
        my_put_ushort(a / 10);
    my_putchar(a % 10 + '0');
    return (0);
}
