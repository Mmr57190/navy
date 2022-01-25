/*
** EPITECH PROJECT, 2021
** open_n_read
** File description:
** open_n_read
*/

#include "navy.h"

int to_find_size_files(char *str)
{
    struct stat info;

    stat(str, &info);
    return (info.st_size);
}

char *open_n_read(char *av)
{
    int op_en = 0;
    int size = to_find_size_files(av);
    char *maps = malloc(sizeof(char) * size + 1);

    op_en = open(av, O_RDONLY);
    if (op_en == -1)
        return (NULL);
    read(op_en , maps, 31);
    maps[31] = '\0';
    close(op_en);

    return (maps);
}
