/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_revstr.c
*/

#include "my.h"

char *my_revstr(char *str)
{
    int a = 0;
    char *result = malloc(sizeof(char) * my_strlen(str) + 5);

    for (int i = my_strlen(str) - 1; i >= 0; i--, a++) {
        result[a] = str[i];
        }
    result[a] = '\0';
    my_putstr(result);
    return (result);
}
