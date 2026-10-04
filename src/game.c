
#include <raylib.h>
#include "../include/graphics/sprite.h"

typedef struct Settings {
    int w_width;
    int w_height;
    int target_fps;
} Settings;

Settings new(void) {
    Settings new = {.target_fps = 60, .w_height = 500, .w_width = 700};
    return new;
}

void init(Settings game_settings) {
    InitWindow(game_settings.w_width, game_settings.w_height, "Maere");
    SetTargetFPS(game_settings.target_fps);
}

Sprite load(void) {
    Sprite new_sprite = {.texture = LoadTexture("./res/player.png"), .source_rectangle = {0.0, 0.0, 16.0, 16.0}, .origin = {0.0, 0.0}, .scale = {4.0, 4.0}, .rotation = 0.0, .tint = WHITE};
    return new_sprite;
}

void update(void) {

}

void draw(Sprite sprite) {
    BeginDrawing();

    ClearBackground(GRAY);
    Vector2 pos = {0.0, 0.0};
    sprite_draw(sprite, pos);
    //DrawTexture(sprite.texture, 0, 0, WHITE);

    EndDrawing();
}

void run(void) {
    Settings game_settings = new();
    init(game_settings);

    Sprite test_sprite = load();

    while (!WindowShouldClose()) {
        update();
        draw(test_sprite);
    }
    CloseWindow();
}
