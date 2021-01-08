/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my first print with c language
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

int find_i(char *tab, char element)
{
    int i = 0;

    for (i = 0; tab[i] != 0; i++) {
        if (tab[i] == element)
        return (i);
    }
    return (-1);
}

int error(char *src)
{
    int i = 0;
    for (i = 0; src[i] != '\0'; i++) {
        if (i != 0 && src[i - 1] == '%') {
            if (src[i] != 's' && src[i] != 'c' &&
                src[i] != 'd' && src[i] != 'b' &&
                src[i] != 'i' && src[i] != 'o' &&
                src[i] != 'x') {
                    write(1, "error\n", 6);
                    return (84);
            }
        }
    }
    return (0);
}

int my_printf(char *src, ...)
{
    if (error(src) == 84)
        return (84);
    va_list my_list;
    int i = 0;
    int x;
    char tab_index[8] = {'s', 'c', 'd', 'b', 'i', 'o', 'x', '0'};
    void (*tab_function[7])(va_list *my_list) = {my_printf_str, my_printf_char,
                                                my_printf_nbr, my_printf_bin,
                                                my_printf_nbr, my_printf_oct,
                                                my_printf_hex};
    va_start(my_list, src);

    for (i = 0; src[i] != '\0'; i++) {
        if (i != 0 && src[i - 1] == '%') {
            x = find_i(tab_index, src[i]);
            if (x != -1)
                (*tab_function[x]) (&my_list);
        } else if (src[i] != '%')
            my_putchar(src[i]);
    }
    return (0);
}