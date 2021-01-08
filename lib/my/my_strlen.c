/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** my lib
*/

int my_strlen(char const *str)
{
    int count = 0;

    while ('\0' != *str) {
        str++;
        count++;
    }
    return count;
}