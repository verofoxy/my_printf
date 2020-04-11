/*
** EPITECH PROJECT, 2019
** fonction
** File description:
** display the arguments follwed by '\n'
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/bootstrap.h"
#include "../include/my.h"

void part_one(va_list ap, char *s, int *i)
{ 
    switch(s[*i + 1])
    {
    case '%':
        my_putchar('%');
        (*i)++;
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        (*i)++;
        break;
    default :
        part_two(ap, s, i);
    }
}

void part_two(va_list ap, char *s, int *i)
{
    switch(s[*i + 1])
    {
    case 'u':
        my_put_nbru(va_arg(ap, int));
        (*i)++;
        break;
    case 'x':
        my_put_nbr_hexa_min(va_arg(ap, int));
        (*i)++;
        break;
    case 'X':
        my_put_nbr_hexa_maj(va_arg(ap, int));
        (*i)++;
        break;
    default :
        part_three(ap, s, i);
    }
}

void part_three(va_list ap, char *s, int *i)
{
    switch(s[*i + 1])
    {
    case 'd':
        my_put_nbr(va_arg(ap, int));
        (*i)++;
        break;
    case 'b':
        my_put_nbr_binaire(va_arg(ap , int));
        (*i)++;
        break;
    case 'o':
        my_put_nbr_octa(va_arg(ap, int));
        (*i)++;
        break;
    default :
        part_four(ap, s, i);
    }
}

void part_four(va_list ap, char *s, int *i)
{
    switch(s[*i + 1])
    {
    case 'c':
        my_putchar(va_arg(ap, int));
        (*i)++;
        break;
    case 'i':
        my_put_nbr(va_arg(ap, int));
        (*i)++;
        break;
    default :
        my_putchar(s[*i - 1]);
        my_putchar(s[*i]);
    }
}

int my_printf(char *s, ...)
{
    int *i = malloc(sizeof(int));
    int idx = my_strlen(s), arg;
    char *ch2;
    va_list ap;

    *i = 0;
    va_start(ap, s);
    while (*i != idx) {
        if (s[*i] == '%' && s[*i + 1]) {
            part_one(ap, s, i);
        }
        else {
            my_putchar(s[*i]);
        }
        (*i)++;
    }
    va_end(ap);
    return (0);
}
