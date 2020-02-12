/*
** EPITECH PROJECT, 2019
** find smallest nbr
** File description:
** Made by Jeremy Dumesny
*/

#include <stdio.h>
#include "../include/my.h"

int find_small(head_t *l_a, int list_length)
{
    int nbr = l_a->begin->data;
    int incr = 1;
    int save_pos = 0;
    node_t *temp = l_a->begin;
    while (temp != NULL) {
        if (nbr > temp->data) {
            nbr = temp->data;
            save_pos = incr;
        }
        temp = temp->next;
        incr++;
    }
    return (save_pos);
}

int order(head_t *l_a, int list_length)
{
    node_t *temp = l_a->begin;
    node_t *tmp = l_a->begin->next;

    while (tmp != NULL) {
        if (temp->data > tmp->data)
            return (0);
        temp = temp->next;
        tmp = tmp->next;
    }
    return (1);
}