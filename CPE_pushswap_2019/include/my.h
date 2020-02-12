/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Made by Jeremy Dumesny
*/

#ifndef MY_H
#define MY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node_s
{
    int data;
    struct node_s *next;
    struct node_s *prev;
} node_t;

typedef struct head_s
{
    int f_op;
    node_t *begin;
    node_t *end;
} head_t;

int order(head_t *l_a, int list_length);
void wrt_pa(head_t **l_a);
void wrt_pb(head_t **l_a);

void algo(head_t *l_a, head_t *l_b, int list_length);
int main(int ac, char **av);
void Print(head_t *head);
void add_node(node_t *linked_list, int x, head_t *head);
head_t *get_n_node(int x, head_t *l_a);

int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);

void sa(head_t *l_a);
void sb(head_t *l_b);
void sc(head_t *l_b, head_t *l_a);

void ra(head_t *l_a);
void rb(head_t *l_b);
void rr(head_t *l_a, head_t *l_b);

void rra(head_t *l_a);
void rrb(head_t *l_b);
void rrr(head_t *l_a, head_t *l_b);

head_t *pb(head_t *l_b, head_t *l_a);
head_t *pa(head_t *l_a, head_t *l_b);

head_t *pop_front(head_t *l_a);
head_t *pop_back(head_t *l_a);

int find_small(head_t *l_a, int list_length);
void up(int save_pos, int *list_length, head_t **l_a, head_t **l_b);
void down(int save_pos, int *list_length, head_t **l_a, head_t **l_b);

#endif