/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_getnbr.c
*/

#include "my.h"

int sign_handle(char *str)
{
    int n = 0;

    for (int i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            n++;
        }
    if (n % 2 == 0)
        return (1);
    else
        return (-1);
}

int my_getnbr(char *str)
{
    int a = 0;
    int n = 0;

    for (int i = 0; str[i] == '-' || str[i] == '+'; i++, n++);
    for (; str[n] >= '0' && str[n] <= '9'; n++) {
        a *= 10;
        a += str[n] - 48;
    }
    return (a * sign_handle(str));
}
