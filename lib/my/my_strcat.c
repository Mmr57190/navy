/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_strcat.c
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int j = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++, j++)
        dest[j] = src[i];
    dest[j] = '\0';

    return (dest);
}
