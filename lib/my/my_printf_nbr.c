/*
** EPITECH PROJECT, 2021
** my_printf_nbr.c
** File description:
** my first print nbr in c
*/

#include <stdarg.h>

void my_put_nbr(int nbr);

void my_printf_nbr(va_list *my_list)
{
    char num = va_arg(*my_list, int);
    my_put_nbr(num);
}
