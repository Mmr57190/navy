/*
** EPITECH PROJECT, 2021
** Graphics
** File description:
** my_str_to_word_array
*/

#include "my.h"

char **str_to_word_array(char *array, char c)
{
    char **result = malloc(sizeof(char *) * my_strlen(array) + 1);
    int j = 0;
    int m = 0;

    for (int i = 0; array[i] != '\0'; i++) {
        if (i == 0)
            result[j] = malloc(sizeof(char) * my_strlen(array));
        result[j][m] = array[i];
        m++;
        if (array[i] == c) {
            result[j][m] = '\0';
            j++;
            m = 0;
            result[j] = malloc(sizeof(char) * my_strlen(array));
        }
    }
    result[j + 1] = NULL;

    return (result);
}
