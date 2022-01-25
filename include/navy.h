/*
** EPITECH PROJECT, 2021
** PSU
** File description:
** navy
*/

#ifndef NAVY_H_
    #define NAVY_H_
    #include "my_p.h"
    #include <sys/types.h>
    #include <string.h>
    #include <stdarg.h>
    #include <stddef.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <sys/signal.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/stat.h>

typedef struct{
    volatile int id_player;
    pid_t player;
} data_t;

typedef struct{
    char **argv;
    int player;
    char **maps_p_one;
    char **maps_p_two;
    char **maps_p_one_two;
    char **maps_p_two_one;
    char *txt;
} opn;

typedef struct {
    int boolean;
} error_hdl;

typedef struct{
    int x;
    int y;
} coordonate;

typedef struct{
    int size;
    int boolean;
    coordonate first;
    coordonate second;
} boat_place;

void handler(int sig, siginfo_t *info, __attribute__((unused)) void *buff);
int first_p(opn *use);
void connection_first_p(struct sigaction sa, opn *use);
int snd_p(opn *use);
void connection_snd_p(struct sigaction sa, opn *use);

int to_find_size_files(char *str);
char *open_n_read(char *av);
void print_map(opn *use);
int get_map(opn *use, char *av);
char **map_complete(char *str);
int max(int nb1, int nb2);
int min(int nb1, int nb2);

void helper();

int sign_exist(opn *use, int i);
int pid_error(char **av);
int gest_error_map(opn *use);
int gest_error(opn *use);
int inequality_for_nums(error_hdl *error, opn *use, int i);
int inequality_for_car(error_hdl *error, opn *use, int i);
int inequality(error_hdl *error, opn *use, int i);
int error_handle(opn *use);
char **print_boat(char *tmp, char **map);
char **complete_1(char **map, boat_place *position, int i);
char **complete_2(char **map, boat_place *position, int i, int y);
void fill_up_struct(char *map, boat_place *position, int i);


#endif /* !NAVY_H_ */
