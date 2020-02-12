/*
** EPITECH PROJECT, 2019
** PA PB
** File description:
** Made by Jeremy Dumesny
*/

#include <stdio.h>
#include "../include/my.h"

head_t *pb(head_t *l_b, head_t *l_a)
{
    node_t *n_node = malloc(sizeof(node_t));
    if (n_node == 0)
        return NULL;
    n_node->data = l_a->begin->data;
    n_node->prev = NULL;
    n_node->next = NULL;
    if (l_b == 0) {
        l_b = malloc(sizeof(head_t));
        if (l_b == 0)
            return NULL;
        l_b->begin = n_node;
        l_b->end = n_node; }
    else {
        l_b->begin->prev = n_node;
        n_node->next = l_b->begin;
        l_b->begin = n_node;
    }
    l_a = pop_front(l_a);
    wrt_pb(&l_a);
    return l_b;
}

void wrt_pb(head_t **l_a)
{
    if ((*l_a)->f_op == 0)
        write(1, "pb", 2);
    else
        write(1, " pb", 3);
    (*l_a)->f_op = 1;
}

void wrt_pa(head_t **l_a)
{
    if ((*l_a)->f_op == 0)
        write(1, "pa", 2);
    else
        write(1, " pa", 3);
}

head_t *pa(head_t *l_a, head_t *l_b)
{
    node_t *n_node = malloc(sizeof(node_t));
    if (n_node == 0)
        return NULL;
    n_node->data = l_b->begin->data;
    n_node->prev = NULL;
    n_node->next = NULL;
    if (l_a == 0) {
        l_a = malloc(sizeof(head_t));
        if (l_a == 0)
            return NULL;
        l_a->begin = n_node;
        l_a->end = n_node; }
    else {
        l_a->begin->prev = n_node;
        n_node->next = l_a->begin;
        l_a->begin = n_node;
    }
    l_b = pop_front(l_b);
    wrt_pa(&l_a);
    return l_a;
}