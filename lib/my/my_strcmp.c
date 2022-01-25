/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == s2[i]);
        else
            return (1);
    }
    return (0);
}
