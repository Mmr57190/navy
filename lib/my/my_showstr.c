/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_showstr.C
*/

#include "my.h"

int my_showstr(char const *str)
{
    my_putstr(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 0 && str[i] <= 31)
            my_putchar('\\');
    }
    return (0);
}
