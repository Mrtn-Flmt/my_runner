/*
** EPITECH PROJECT, 2021
** my_printf_bin.c
** File description:
** my first binary print in c
*/

#include <stdarg.h>
#include "../../include/my.h"
#include <stdlib.h>
#include <stdio.h>

int my_printf_bin(va_list *my_list)
{
    int t[50];
    int i = 0;
    char num = va_arg(*my_list, int);

    for (;num != 0; i++) {
        t[i] = num % 2;
        num = num / 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_put_nbr(t[j]);
    }
    return (0);
}