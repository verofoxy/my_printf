/*
** EPITECH PROJECT, 2019
** bootstrap
** File description:
** ihdd
*/

#ifndef BOOTSTRAP_H
#define BOOTSTRAP_H

#include <stddef.h>
#include <stdlib.h>

int my_printf(char *s, ...);
int my_put_nbru(int nb);
int my_put_nbr_binaire(int nb);
int my_put_nbr_hexa_maj(int nb);
int my_put_nbr_hexa_min(int nb);
int my_put_nbr_octa(int nb);
void part_one(va_list ap, char *s, int *i);
void part_two(va_list ap, char *s, int *i);
void part_three(va_list ap, char *s, int *i);
void part_four(va_list ap, char *s, int *i);

#endif
