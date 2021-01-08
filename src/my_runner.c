/*
** EPITECH PROJECT, 2021
** my_runner.c
** File description:
** second game in csfml
*/

#include <SFML/Graphics.h>
#include <SFML/Window/Mouse.h>
#include "./../include/my.h"

void window_mode(int, int, struct my_sprite sprite);

int main(void)
{
    struct my_sprite background1;
    background1.texture = sfTexture_createFromFile("assets/wall.jpeg", NULL);
    background1.position.x = 0;
    background1.position.y = 0;
    background1.sprite = sfSprite_create();

    struct my_sprite background2;
    background2.texture = sfTexture_createFromFile("assets/wall.jpeg", NULL);
    background2.position.x = 1920;
    background2.position.y = 0;
    background2.sprite = sfSprite_create();

    //sfSprite_setScale(sprite.sprite, (sfVector2f){0.1, 0.1});

    window_mode(1920, 1080, background1);
    return (0);
}