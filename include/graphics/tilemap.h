#pragma once
#include "sprite.h"
#include "tileset.h"
#include "raylib.h"

typedef struct Tilemap {
    Tileset tileset;
    int collumns;
    int rows;
    Vector2 *cells;
} Tilemap;

Tilemap tilemap_new(Tileset tileset, int collumns, int rows);
void tilemap_draw(Tilemap tilemap, float scale);
void tilemap_free(Tilemap *tilemap);
