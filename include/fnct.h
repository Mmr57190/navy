/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** fnct
*/

#ifndef FNCT_H_
#define FNCT_H_
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>

void print_nb(va_list list);
void print_cha(va_list list);
void print_str(va_list list);

struct printf {
    char letter;
    void (*print)(va_list list);
};

const struct printf PRINT_F[] =
{
    {'d', &print_nb},
    {'i', &print_nb},
    {'c', &print_cha},
    {'s', &print_str},
};

#endif/* !FNCT_H_ */