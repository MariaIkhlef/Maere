#pragma once
#include "raylib.h"

typedef struct Sprite {
    Texture2D texture;
    Rectangle source_rectangle;
    Vector2 scale;
    Vector2 origin;
    Color tint;
    float rotation;
} Sprite;

Sprite sprite_new(Texture2D texture, Rectangle source_rectangle);
void sprite_draw(Sprite sprite, Vector2 position);
