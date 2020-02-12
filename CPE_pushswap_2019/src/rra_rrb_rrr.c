/*
** EPITECH PROJECT, 2019
** RRA RRB RRR
** File description:
** Made by Jeremy Dumesny
*/

#include <stdio.h>
#include "../include/my.h"

void rra(head_t *l_a)
{
    l_a->end = l_a->end->prev;
    l_a->begin->prev = l_a->end->next;
    l_a->begin->prev->next = l_a->begin;
    l_a->begin = l_a->begin->prev;
    l_a->begin->prev = NULL;
    l_a->end->next = NULL;
    if (l_a->f_op == 0)
        write(1, "rra", 3);
    else
        write(1, " rra", 4);
    l_a->f_op = 1;
}

void rrb(head_t *l_b)
{
    l_b->end = l_b->end->prev;
    l_b->begin->prev = l_b->end->next;
    l_b->begin->prev->next = l_b->begin;
    l_b->begin = l_b->begin->prev;
    l_b->begin->prev = NULL;
    l_b->end->next = NULL;
    if (l_b->f_op == 0)
        write(1, "rrb", 3);
    else
        write(1, " rrb", 4);
}

void rrr(head_t *l_a, head_t *l_b)
{
    char *name = "rrr ";
    rra(l_a);
    rrb(l_b);
    my_putstr(name);
}