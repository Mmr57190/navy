/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCY-1-1-myls-sabri.ouadah
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char *str)
{
    char *result = malloc(sizeof(char) * my_strlen(str) + 1);
    int i;

    for (i = 0; str[i] != '\0'; i++)
        result[i] = str[i];
    result[i] = '\0';

    return (result);
}
