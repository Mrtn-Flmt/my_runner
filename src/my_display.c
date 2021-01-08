/*
** EPITECH PROJECT, 2021
** my_src.c
** File description:
** file of my_runner
*/

#include <SFML/Graphics.h>
#include "./../include/my.h"

void display_sprite(sfRenderWindow *window, struct my_sprite *sprite)
{
    sfSprite_setPosition(sprite->sprite, sprite->position);
    sfRenderWindow_drawSprite(window, sprite->sprite, NULL);
}

void loop(sfRenderWindow *window, struct my_sprite *sprite)
{
    sprite->position.x -= 10;
    if (sprite->position.x <= -1920) {
        sprite->position.x = 0;
    }
}

void display(sfRenderWindow *window, sfEvent event, struct my_sprite *sprite)
{
    struct my_sprite background2;
    background2.texture = sfTexture_createFromFile("assets/wall.jpeg", NULL);
    background2.position.x = 1920;
    background2.position.y = 0;
    background2.sprite = sfSprite_create();

    sfRenderWindow_clear(window, sfBlack);
    display_sprite(window, sprite);
    sfRenderWindow_display(window);
    loop(window, sprite);
    loop(window, &background2);
}

void window_mode(int x, int y, struct my_sprite sprite)
{
    sfRenderWindow *window;
    sfVideoMode res = {x, y, 32};
    window = sfRenderWindow_create(res, "my_runner", sfResize | sfClose, NULL);
    sfSprite_setTexture(sprite.sprite, sprite.texture, sfTrue);
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        display(window, event, &sprite);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed ||
            sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(window);
        }
    }
}