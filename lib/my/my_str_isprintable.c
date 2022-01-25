/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_str_isprintable.c
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 31)
            a++;
    }
    if (a == my_strlen(str))
        return (1);
    else
        return (0);
}
