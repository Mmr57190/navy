/*
** EPITECH PROJECT, 2021
** print_map
** File description:
** print_map
*/

#include "navy.h"

int sign_exist(opn *use, int i)
{
    if (i == 1 || i == 4 || i == 9 || i == 12 ||
        i == 17 || i == 20 || i == 25 || i == 28) {
        if (use->txt[i] != ':')
            return (84);
        }
    return (0);
}

int gest_error_map(opn *use)
{
    error_hdl *error = malloc(sizeof(error_hdl));
    int x = 0;
    error->boolean = 0;

    for (int i = 0; i < 31; i++, x++) {
        if (sign_exist(use, i) == 84)
            return (84);
        if (inequality(error, use, i) == 84)
            return (84);
        if (i == 2 || i == 10 || i == 18 || i == 26)
            if (use->txt[i + 3] != use->txt[i]) {
                error->boolean = 1;
                if (use->txt[i + 4] != use->txt[i + 1])
                return (84);
            }
        if (use->txt[i] == '\n')
            x = -1;
    }
    return (0);
}
