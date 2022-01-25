/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_p
*/

#include "../../include/my_p.h"
#include "../../include/fnct.h"

void loop_tab(char *s, int j, va_list list)
{
    for (int i = 0; i < 4; i++) {
        if (s[j] == PRINT_F[i].letter) {
            PRINT_F[i].print(list);
        }
    }
}

void my_printf(char *s, ...)
{
    va_list list;
    va_start(list, s);

    for (int j = 0; s[j] != '\0'; j++) {
        if (s[j] == '%') {
            j++;
            loop_tab(s, j, list);
        } else
            my_putchar(s[j]);
    }
    va_end(list);
}
