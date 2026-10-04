#include "../../include/graphics/sprite.h"

Sprite sprite_new(Texture2D texture, Rectangle source_rectangle) {
    Sprite new_sprite = {
        .texture = texture,
        .source_rectangle = source_rectangle,
        .scale = {1.0, 1.0},
        .origin = {0.0, 0.0},
        .tint = WHITE,
        .rotation = 0.0
    };

    return new_sprite;
}

void sprite_draw(Sprite sprite, Vector2 position) {
    Rectangle destination_rectangle = {position.x, position.y, sprite.source_rectangle.width * sprite.scale.x, sprite.source_rectangle.height * sprite.scale.y};
    DrawTexturePro(
        sprite.texture,
        sprite.source_rectangle,
        destination_rectangle,
        sprite.origin,
        sprite.rotation,
        sprite.tint);
}
