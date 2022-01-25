/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_strlen.c
*/

#include "my.h"

int my_strlen(char const *str)
{
    int a;

    for (a = 0; str[a] != '\0'; a++);
    return (a);
}
