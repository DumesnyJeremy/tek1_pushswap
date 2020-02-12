/*
** EPITECH PROJECT, 2019
** OPERATION
** File description:
** POP
*/

#include <stdio.h>
#include "../include/my.h"

head_t *pop_back(head_t *l_a)
{
    if (l_a->begin == l_a->end){
        free(l_a);
        return NULL;
    }
    node_t *temp = l_a->end;

    l_a->end = l_a->end->prev;
    l_a->end->next = NULL;
    temp->next = NULL;
    temp->prev = NULL;

    free(temp);
    temp = NULL;
    return (l_a);
}

head_t *pop_front(head_t *l_a)
{
    if (l_a->begin == l_a->end){
        free(l_a);
        return NULL;
    }
    node_t *temp = l_a->begin;

    l_a->begin = l_a->begin->next;
    l_a->begin->prev = NULL;
    temp->next = NULL;
    temp->prev = NULL;

    free(temp);
    temp = NULL;
    return (l_a);
}