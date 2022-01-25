/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_str_isnum.c
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            a++;
        if (str[i] == ' ')
            a++;
    }
    if (a == my_strlen(str))
        return (1);
    else
        return (0);
}
