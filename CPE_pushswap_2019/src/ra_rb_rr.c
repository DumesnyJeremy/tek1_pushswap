/*
** EPITECH PROJECT, 2019
** RA RB
** File description:
** Made by Jeremy Dumesny
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

void ra(head_t *l_a)
{
    l_a->begin = l_a->begin->next;
    l_a->end->next = l_a->begin->prev;
    l_a->end->next->prev = l_a->end;
    l_a->end = l_a->end->next;
    l_a->begin->prev = NULL;
    l_a->end->next = NULL;
    if (l_a->f_op == 0)
        write(1, "ra", 2);
    else
        write(1, " ra", 3);
    l_a->f_op = 1;
}

void rb(head_t *l_b)
{
    l_b->begin = l_b->begin->next;
    l_b->end->next = l_b->begin->prev;
    l_b->end = l_b->end->next;
    l_b->begin->prev = NULL;
    l_b->end->next = NULL;
    if (l_b->f_op == 0)
        write(1, "rb", 2);
    else
        write(1, " rb", 3);
}

void rr(head_t *l_a, head_t *l_b)
{
    char *name = "rr ";
    ra(l_a);
    rb(l_b);
    my_putstr(name);
}