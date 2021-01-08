/*
** EPITECH PROJECT, 2021
** my_printf_oct.c
** File description:
** my first octal print in c
*/

#include <stdarg.h>
#include "../../include/my.h"

int my_printf_oct(va_list *my_list)
{
    int t[50];
    int i = 0;
    char num = va_arg(*my_list, int);

    for (;num != 0; i++) {
        t[i] = num % 8;
        num = num / 8;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_put_nbr(t[j]);
    }
    return (0);
}