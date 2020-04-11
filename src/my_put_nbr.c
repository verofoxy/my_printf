/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** dfghj
*/

#include <unistd.h>

void my_putchar(char c);

long long int my_put_nbr(long long int nb)
{
    long long int n = nb;

    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n > 9) {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    } else {
        my_putchar(n + 48);
    }
    return (0);
}
