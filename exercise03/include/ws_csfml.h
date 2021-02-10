/*
** EPITECH PROJECT, 2021
** workshop-rebirth-csfml
** File description:
** ws_csfml
*/

#ifndef WS_CSFML_H_
#define WS_CSFML_H_

#include <SFML/Graphics.h>

#include <stdlib.h>

enum OBJ_TYPE
{
    BACKGROUND,
    BIRD,
    PLAYER
    /* ...etc */
};

typedef struct s_object
{
    OBJ_TYPE type;
    /*
    ** [Elements...]
    */
} object_t;

typedef struct s_game
{
    /*
    ** [Elements...]
    */
} game_t;

#endif /* !WS_CSFML_H_ */
