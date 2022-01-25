/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_strcapitalize.c
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0)
            str[i] = str[i] + 32;
        if (str[i] == ' ')
            str[i + 1] = str[i + 1] + 32;
    }
    return (str);
}
