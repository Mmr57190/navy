/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** my_h.c
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stddef.h>
    #include <stdarg.h>
    #include <limits.h>

void my_putchar(char c);

char *my_strstr(char *str, char const *to_find);

int my_compute_power_rec(int nb, int p);

int my_isneg(int nb);

int my_strcmp(char const *s1, char const *s2);

int my_put_nbr(int nb);

int my_strncmp(char const *s1, char const *s2, int n);

void my_swap(int *a, int *b);

char *my_strupcase(char *str);

int my_putstr(char const *str);

char *my_strlowcase(char *str);

int my_strlen(char const *str);

char *my_strcapitalize(char *str);

int my_getnbr(char *str);

int my_str_isalpha(char const *str);

void my_sort_int_array(int *tab, int size);

int my_str_isnum(char const *str);

int my_str_islower(char const *str);

int my_compute_square_root(int nb);

int my_str_isupper(char const *str);

int my_is_prime(int nb);

int my_str_isprintable(char const *str);

int my_find_prime_sup(int nb);

int my_showstr(char const *str);

char *my_strdup(char *str);

char *my_strcpy(char *dest, char const *src);

int my_showmem(char const *str, int size);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strcat(char *dest, char const *src);

char *my_revstr(char *str);

char *my_strncat(char *dest, char const *src, int nb);

unsigned my_put_unbr(unsigned int nb);

unsigned short my_put_ushort(unsigned int nb);

unsigned long my_put_ulong(unsigned long nb);

long my_put_long(long nb);

short my_put_short(int nb);

char **str_to_word_array(char *array, char c);

#endif/* MY_H_ */
