/*
** EPITECH PROJECT, 2021
** PSU
** File description:
** main_navy
*/

#include "../include/navy.h"

data_t *ata;

int error(int ac, char **av, opn *use)
{
    if (ac == 2) {
        use->player = 1;
        if (get_map(use, av[1]) == 84)
            return (84);
    } else if (ac == 3) {
        use->player = 2;
        if (get_map(use, av[2]) == 84)
            return (84);
    } else
        return (84);
    if (error_handle(use) == 84)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    opn *use = malloc(sizeof(opn));
    struct sigaction sa;
    use->argv = av;
    ata = malloc(sizeof(data_t));
    sa.sa_flags = SA_SIGINFO;
    ata->id_player = -1;

    if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h') {
        helper();
        return (0);
    }
    if (error(ac, av, use) == 84)
        return (84);
    if (ac == 3) {
        if (pid_error(av) == 84)
            return (84);
        connection_snd_p(sa, use);
    }

    if (ac == 2)
        connection_first_p(sa, use);
    free(use);
    return (0);
}
