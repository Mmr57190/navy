/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_strcpy.c
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int a = 0;

    for (; src[a] != '\0'; a++)
        dest[a] = src[a];
    dest[a] = '\0';
    return (dest);
}
