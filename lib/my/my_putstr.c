/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my lib
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    while ('\0' != *str) {
        my_putchar(*str);
        str++;
    }
}