#pragma once
#include "../../graphics/sprite.h"
#include "raylib.h"

typedef struct Mob {
    Sprite sprite;
    Vector3 position;
    Vector3 velocity;
    Vector2 direction;
    float weight;
    float speed;
} Mob;

Mob mob_new(Sprite sprite);
void mob_update(Mob *mob, float frame_time);
void mob_draw(Mob mob);
