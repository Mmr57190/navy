/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCY-1-1-navy-flavien.maameri
** File description:
** player_two
*/

#include "../include/navy.h"

extern data_t *ata;

int snd_p(opn *use)
{
    pid_t pid = 0;
    pid = getpid();
    char *attack_p_two;

    if (kill(my_getnbr(use->argv[1]), SIGUSR1) == -1) {
        my_printf("\ncan't catch SIGUSR1\n");
        return (84);
    }
    my_printf("my_pid: %d\n", pid);
    my_printf("successfully connected\n");
    print_map(use);
    my_printf("\nwaiting for enemy's attack...\n");
    pause();
    attack_p_two = get_position();

    return (0);
}

void connection_snd_p(struct sigaction sa, opn *use)
{
    sa.sa_sigaction = handler;
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    snd_p(use);
}
