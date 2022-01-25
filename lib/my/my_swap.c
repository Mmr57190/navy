/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_swap.c
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
