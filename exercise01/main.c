/*
** EPITECH PROJECT, 2021
** workshop-rebirth-csfml
** File description:
** main
*/

#include <SFML/Graphics.h>

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

int main(void)
{
    sfRenderWindow* window = create_window("CSFML Workshop");
    sfSprite *background = create_sprite_background();
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, background, NULL);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}