#pragma once
#include "sprite.h"
#include <raylib.h>
#include "string.h"

typedef struct Tileset {
    Texture2D texture;
    bool collisions[8][8];
    Vector2 origin;
    int cell_width;
    int cell_height;
} Tileset;

Tileset tileset_new(Texture2D texture, Vector2 origin);
void tileset_set_collisions(Tileset *tileset, bool collisions[8][8]);
