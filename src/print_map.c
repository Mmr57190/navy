/*
** EPITECH PROJECT, 2021
** print_map
** File description:
** print_map
*/

#include "navy.h"

void print_map(opn *use)
{
    int i = 0;

    my_printf("\nmy positions:\n");
    my_printf(" |A B C D E F G H\n-+---------------\n");
    if (use->player == 1) {
        for (int y = 1; i < 8; i++, y++)
            my_printf("%d|%s\n", y, use->maps_p_one[i]);
    } else
        for (int y = 1; i < 8; i++, y++)
            my_printf("%d|%s\n", y, use->maps_p_two[i]);
    my_printf("\nenemy's positions:\n");
    my_printf(" |A B C D E F G H\n-+---------------\n");
    if (use->player == 2) {
        for (int y = 1, i = 0; i < 8; i++, y++)
            my_printf("%d|%s\n",y ,use->maps_p_two_one[i]);
    } else
        for (int y = 1, i = 0; i < 8; i++, y++)
            my_printf("%d|%s\n", y, use->maps_p_one_two[i]);
}
