/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_strncat.c
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int j = my_strlen(dest);
    int i = 0;

    for (; i < nb && src[i] != '\0'; i++, j++)
        dest[j] = src[i];
    dest[j] = '\0';

    return (dest);
}
