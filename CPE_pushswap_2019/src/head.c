/*
** EPITECH PROJECT, 2019
** HEAD
** File description:
** Made by Jeremy Dumesny
*/

#include <stdio.h>
#include "../include/my.h"

head_t *get_n_node(int x, head_t *l_a)
{
    node_t *n_node = malloc(sizeof(node_t) + 1);
    if (n_node == 0)
        return NULL;
    n_node->data = x;
    n_node->prev = NULL;
    n_node->next = NULL;
    if (l_a == 0) {
        l_a = malloc(sizeof(head_t) + 1);
        if (l_a == 0)
            return NULL;
        l_a->begin = n_node;
        l_a->end = n_node;
        l_a->f_op = 0;
    }
    else {
        l_a->end->next = n_node;
        n_node->prev = l_a->end;
        l_a->end = n_node;
    }
    return l_a;
}

int main(int ac, char **av)
{
    int list_length = 0;
    head_t *l_b = NULL;
    head_t *l_a = NULL;
    if (ac < 2)
        return (84);
    for (int i = 1; i < ac; i++) {
        l_a = get_n_node(my_getnbr(av[i]), l_a);
        list_length++;
        printf("%d\n", l_a->begin->data);
    }
    int yes = order(l_a, list_length);
    if (yes == 1) {
        write(1, "\n", 1);
        return (0);
        }
    algo(l_a, l_b, list_length);
    write(1, "\n", 1);
    return (0);
}