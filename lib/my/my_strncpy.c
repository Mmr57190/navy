/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_strncpy.c
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int a = 0; a < n; a++) {
        if (src[a] == '\0')
            return (0);
        else
            dest [a] = src[a];
    }
    return (dest);
}
