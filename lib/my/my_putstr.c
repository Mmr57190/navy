/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++)
        my_putchar(str[a]);
    return (0);
}
