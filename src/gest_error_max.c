/*
** EPITECH PROJECT, 2021
** error_max
** File description:
** error_max
*/

#include "navy.h"

int gest_error(opn *use)
{
    int nb1 = 0;
    int nb2 = 0;
    int nb3 = 0;
    int nb4 = 0;

    for (int i = 0; i < 31; i++)
        if (i == 2 || i == 10 || i == 18 || i == 26) {
            nb1 = use->txt[i];
            nb2 = use->txt[i + 1] - '0';
            nb3 = use->txt[i + 3];
            nb4 = use->txt[i + 4] - '0';
            if (nb1 > nb3 || nb2 > nb4)
                return (84);
        }
    return (0);
}