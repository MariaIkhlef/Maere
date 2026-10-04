#include "../../include/graphics/tilemap.h"
#include <stdlib.h>
#include <raylib.h>
#include <stdio.h>


Tilemap tilemap_new(Tileset tileset, int collumns, int rows) {
    Vector2 *cells = calloc(sizeof(Vector2), collumns * rows);
    Tilemap new_tilemap = {.tileset = tileset, .rows = rows, .collumns = collumns, .cells = cells};

    return new_tilemap;
}

void tilemap_free(Tilemap *tilemap) {
    free(tilemap->cells);
}
void tilemap_draw(Tilemap tilemap, float scale) {
    for (int i = 0; i < tilemap.collumns * tilemap.rows; i++) {
        int x = i % tilemap.collumns;
        int y = i / tilemap.collumns;
        Rectangle destination_rect = {
            .x = x*tilemap.tileset.cell_width * scale,
            .y = y*tilemap.tileset.cell_height * scale,
            .width = tilemap.tileset.cell_width * scale,
            .height = tilemap.tileset.cell_height * scale
        };
        Rectangle source_rect = {
            .x = tilemap.tileset.origin.x + tilemap.tileset.cell_width * tilemap.cells[i].x,
            .y = tilemap.tileset.origin.y + tilemap.tileset.cell_height * tilemap.cells[i].y,
            .width = tilemap.tileset.cell_width,
            .height = tilemap.tileset.cell_height
        };

        Vector2 origin = {.x = 0, .y = 0};

        DrawTexturePro(
            tilemap.tileset.texture,
            source_rect,
            destination_rect,
            origin,
            0.0,
            WHITE);
    }
    printf("end");
}
