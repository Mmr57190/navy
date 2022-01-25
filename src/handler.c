/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCY-1-1-navy-flavien.maameri
** File description:
** handler
*/

#include "../include/navy.h"

extern data_t *ata;

void handler(int sig, siginfo_t *info, __attribute__((unused)) void *buff)
{
    ata->player = info->si_pid;
    ata->id_player = sig;
}