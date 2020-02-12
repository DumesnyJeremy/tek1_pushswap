/*
** EPITECH PROJECT, 2019
** SA SB SC PB PA
** File description:
** Made by Jeremy Dumesny
*/

#include <stdio.h>
#include "../include/my.h"

void sa(head_t *l_a)
{
    char *name = "sa ";
    int tempo = l_a->begin->data;
    l_a->begin->data = l_a->begin->next->data;
    l_a->begin->next->data = tempo;
    my_putstr(name);
}

void sb(head_t *l_b)
{
    char *name = "sb ";
    int tempo = l_b->begin->data;
    l_b->begin->data = l_b->begin->next->data;
    l_b->begin->next->data = tempo;
    my_putstr(name);
}

void sc(head_t *l_b, head_t *l_a)
{
    char *name = "sc ";
    sa(l_a);
    sb(l_b);
    my_putstr(name);
}