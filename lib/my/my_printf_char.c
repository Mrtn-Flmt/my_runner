/*
** EPITECH PROJECT, 2021
** my_printf_char.c
** File description:
** first printfchar in c
*/

#include <stdarg.h>

void my_putchar(char c);

void my_printf_char(va_list *my_list)
{
    char c = va_arg(*my_list, int);
    my_putchar(c);
}
