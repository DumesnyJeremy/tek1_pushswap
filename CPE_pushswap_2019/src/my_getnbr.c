/*
** EPITECH PROJECT, 2019
** getnum
** File description:
** oui
*/

#include <stdio.h>
#include "../include/my.h"

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}

int	my_getnbr(char const *str)
{
    int	a = 0;
    int	i = 0;
    int	nbr = 0;

    if (str[a] == '-')
        i = 1;
    if (str[a] == '-')
        a++;
    while (str[a] >= 48 && str[a] <= 57)
    {
        nbr *= 10;
        nbr += (str[a] - 48);
        a++;
    }
    if (i == 1)
        nbr = -nbr;
    return (nbr);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
}

void my_putchar(char c)
{
    write(1, &c, 1);
}