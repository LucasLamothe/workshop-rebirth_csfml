/*
** EPITECH PROJECT, 2021
** workshop-rebirth-csfml
** File description:
** main
*/

#include "ws_csfml.h"

static int bird_increment = 0;

sfRenderWindow *create_window(char const *window_title)
{
    sfRenderWindow *window = NULL;
    sfVideoMode window_mode;

    if (window_title == NULL) {
        window_title = "Default name";
    }
    window_mode.width = 800;
    window_mode.height = 600;
    window_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(window_mode, window_title, sfClose | sfDefaultStyle, NULL);
    return (window);
}

sfSprite *create_sprite_background(void)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 800, 600};

    texture = sfTexture_createFromFile("./assets/background.jpg", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}

sfSprite *create_sprite_bird(void)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = NULL;
    sfVector2f pos = {10 + (bird_increment++ * 300), 10};
    sfIntRect rect = {0, 0, 200, 150};
    sfVector2f scale = {0.6, 0.6};

    texture = sfTexture_createFromFile("./assets/bird.png", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setScale(sprite, scale);
    return (sprite);
}

int main(void)
{
    sfRenderWindow* window = create_window("CSFML Workshop");
    sfSprite *background = create_sprite_background();
    sfSprite *bird = create_sprite_bird();
    sfSprite *bird2 = create_sprite_bird();
    sfSprite *bird3 = create_sprite_bird();
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, background, NULL);
        sfRenderWindow_drawSprite(window, bird, NULL);
        sfRenderWindow_drawSprite(window, bird2, NULL);
        sfRenderWindow_drawSprite(window, bird3, NULL);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}