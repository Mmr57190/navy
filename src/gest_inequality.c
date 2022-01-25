/*
** EPITECH PROJECT, 2021
** inequality
** File description:
** inequamity
*/

#include "navy.h"

int max(int nb1, int nb2)
{
    if (nb1 >= nb2)
        return (nb1);
    else
        return (nb2);
}

int min(int nb1, int nb2)
{
    if (nb1 < nb2)
        return (nb1 - 1);
    else
        return (nb2 - 1);
}

int inequality_for_nums(error_hdl *error, opn *use, int i)
{
    int total = 0;
    int nb1 = 0;
    int nb2 = 0;

    if (error->boolean == 0) {
            total = use->txt[i - 3] - '0';
            nb1 = use->txt[i] - '0';
            nb2 = use->txt[i + 3] - '0';
            if (max(nb1, nb2) - min(nb1, nb2) != total) {
                error->boolean = 0;
                return (84);
            }
        }
    return (0);
}

int inequality_for_car(error_hdl *error, opn *use, int i)
{
    int total = 0;
    int nb1 = 0;
    int nb2 = 0;

    if (error->boolean == 1) {
            total = use->txt[i - 3] - '0';
            nb1 = use->txt[i - 1];
            nb2 = use->txt[i + 2];
            if (max(nb1, nb2) - total != min(nb1, nb2)) {
                error->boolean = 0;
                return (84);
            }
    }
    return (0);
}

int inequality(error_hdl *error, opn *use, int i)
{
    if (i == 3 || i == 11 || i == 19 || i == 27) {
        if (inequality_for_nums(error, use, i) == 84)
            return (84);
        else if (inequality_for_car(error, use, i) == 84)
            return (84);
    }
    error->boolean = 0;
    return (0);
}