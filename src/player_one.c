/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCY-1-1-navy-flavien.maameri
** File description:
** player_one
*/

#include "../include/navy.h"

extern data_t *ata;

int check_pos(char *pos)
{
    if (my_strlen(pos) != 3)
        return (0);
    if (pos[0] != 'A' && pos[0] != 'B' &&
        pos[0] != 'C' && pos[0] != 'D' &&
        pos[0] != 'E' && pos[0] != 'F' &&
        pos[0] != 'G' && pos[0] != 'H')
        return (0);
    if (pos[1] != '1' && pos[1] != '2' &&
        pos[1] != '3' && pos[1] != '4' &&
        pos[1] != '5' && pos[1] != '6' &&
        pos[1] != '7' && pos[1] != '8')
        return (0);
    return (1);
}

char *get_position(void)
{
    size_t bufsize = 32;
    char *tmp = malloc(sizeof(char) * bufsize);

    my_printf("\nattack: ");
    getline(&tmp, &bufsize, stdin);
    if (check_pos(tmp) == 0) {
        my_putstr("wrong position");
        free(tmp);
        get_position();
    } else
        return (tmp);

    return (tmp);
}

int first_p(opn *use)
{
    pid_t pid = 0;
    pid = getpid();
    int pid_s = pid;
    char *attack_p_one;

    my_printf("my_pid: %d\nwaiting for enemy connection...\n", pid_s);
    while (ata->id_player == -1);
    kill(ata->player, SIGUSR1);
    my_printf("\nennemy connected\n");
    print_map(use);
    attack_p_one = get_position();
    attack_p_one[2] = ':';
    my_printf("%s hit", attack_p_one);
    my_printf("\n\nwaiting for enemy's attack...\n");
    // use->maps_p_one_two = send_attack(attack_p_one, use->maps_p_one_two);

    return (0);
}

void connection_first_p(struct sigaction sa, opn *use)
{
    sa.sa_sigaction = handler;
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    first_p(use);
}
