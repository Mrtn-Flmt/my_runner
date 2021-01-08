/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my first print with c language
*/

#include <stdarg.h>
#include "../../include/my.h"

void my_printf_hex(va_list *my_list)
{
    int r = 0;
    int n = va_arg(*my_list, int);

    if (n >= 16) {
        r = n % 16;
        n = n / 16;
        my_printf_hex(*my_list);
    } else if (n > 0) {
        r = n % 16;
        n = n / 16;
        if (r > 9)
            my_putchar(r + 87);
        else
            my_putchar(r + 48);
    }
}