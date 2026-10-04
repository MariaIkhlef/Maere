#include "../../include/graphics/tileset.h"

Tileset tileset_new(Texture2D texture, Vector2 origin) {
    Tileset new_tileset = {.texture = texture, .origin = origin, .cell_height = 16, .cell_width = 16, .collisions = {0}};
    return new_tileset;
}

void tileset_set_collisions(Tileset *tileset, bool collisions[8][8]) {
    memcpy(tileset->collisions, collisions, sizeof(bool[8]));
}
