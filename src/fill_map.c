/*
** EPITECH PROJECT, 2021
** fill_map
** File description:
** fill_map
*/

#include "navy.h"

char **map_empty(void)
{
    int i = 0;
    int j = 0;
    char **maps = malloc(sizeof(char *) * 11);

    for (; i < 11; i++) {
        maps[i] = malloc(sizeof(char) * 18);
        for (; j < 15; j++) {
            if (j % 2 == 0) {
                maps[i][j] = '.';
            } else
                maps[i][j] = ' ';
        }
        maps[i][j] = '\0';
        j = 0;
    }
    maps[i] = NULL;

    return (maps);
}

char **map_complete(__attribute__((unused))char *str)
{
    char **maps = malloc(sizeof(char *) * 11);

    maps = map_empty();
    maps = print_boat(str, maps);

    return (maps);
}

int get_map(opn *use, char *av)
{
    use->txt = open_n_read(av);

    if (use->txt == NULL)
        return (84);
    if (use->player == 1) {
        use->maps_p_one = map_complete(use->txt);
    } else
        use->maps_p_two = map_complete(use->txt);
    use->maps_p_one_two = map_empty();
    use->maps_p_two_one = map_empty();
    return (0);
}
