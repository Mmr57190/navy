/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_puchar.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
