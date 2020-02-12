/*
** EPITECH PROJECT, 2019
** algo
** File description:
** Made by Jeremy Dumesny
*/

#include "../include/my.h"

void algo(head_t *l_a, head_t *l_b, int list_length)
{
    int condi = list_length;
    int save_length_list = list_length - 1;
    int save_pos;
    while (list_length != 1) {
        save_pos = find_small(l_a, list_length);
        down(save_pos, &list_length, &l_a, &l_b);
        save_pos = find_small(l_a, list_length);
        up(save_pos, &list_length, &l_a, &l_b);
    }
    for (int decr = 0; decr < save_length_list; decr++)
        pa(l_a, l_b);
    if (condi == 0)
        write(1, "\n", 1);
}

void up(int save_pos, int *list_length, head_t **l_a, head_t **l_b)
{
    int temp = save_pos;
    if (save_pos > (*list_length / 2)) {
        while (temp < *list_length + 1) {
            rra(*l_a);
            temp++;
        }
        *l_b = pb(*l_b, *l_a);
        (*list_length)--;
    }
}

void down(int save_pos, int *list_length, head_t **l_a, head_t **l_b)
{
    int temp = save_pos;
    if (save_pos <= (*list_length / 2)) {
        while (temp > 1) {
            ra(*l_a);
            temp--;
        }
        *l_b = pb(*l_b, *l_a);
        (*list_length)--;
    }
}