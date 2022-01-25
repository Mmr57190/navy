/*
** EPITECH PROJECT, 2021
** place
** File description:
** boat
*/

#include "navy.h"

void fill_up_struct(char *map, boat_place *position, int i)
{
    position->size = map[i] - '0';
    position->first.x = map[i + 2] - 65;
    position->first.y = (map[i + 3] - '0');
    position->second.x = map[i + 5] - 65;
    position->second.y = (map[i + 6] - '0');
}

char **complete_2(char **map, boat_place *position, int i, int y)
{
    if (position->first.y == position->second.y && position->size > 2
        && position->boolean == 0) {
        for (int j = 0, a = y; j < position->size - 1; j++, a += 2)
            map[i][a] = position->size + '0';
    } else if (position->first.x == position->second.x && position->size != 2
        && position->boolean == 0) {
        for (int j = 0, a = i; j < position->size - 1; j++, a ++)
            map[a][y] = position->size + '0';
    } else
        map[i][y] = position->size + '0';
    position->boolean = 1;
    return (map);
}

char **complete_1(char **map, boat_place *position, int i)
{
    for (int y = 0; map[i][y] != '\0'; y++)
        if (y % 2 == 0)
            if (((y / 2) == position->first.x && i + 1 == position->first.y) ||
                ((y / 2) == position->second.x &&
                i + 1 == position->second.y)) {
                map = complete_2(map, position, i, y);
            }
    return (map);
}

char **print_boat(char *tmp, char **map)
{
    boat_place position;

    for (int x = 0; x < 32 ; x += 8) {
        fill_up_struct(tmp, &position, x);
        for (int i = 0; map[i] != NULL; i++) {
            map = complete_1(map, &position, i);
        }
        position.boolean = 0;
    }
    return (map);
}
