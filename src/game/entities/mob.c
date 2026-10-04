#include "../../../include/game/entities/mob.h"
#include <raylib.h>

Mob mob_new(Sprite sprite){
    Vector3 vector3_zero = {.x = 0, .y = 0, .z = 0};
    Vector2 vector_zero = {.x = 0, .y = 0};
    Mob new_mob = {.sprite = sprite, .position = vector3_zero, .direction = vector_zero, .velocity = vector3_zero, .speed = 100.0, .weight = 50.0};
    return new_mob;
}

void mob_update_velocity(Mob *mob, float frame_time) {
    mob->velocity.x = mob->direction.x * mob->speed * frame_time;
    mob->velocity.y = mob->direction.y * mob->speed * frame_time;
}

void mob_update(Mob *mob, float frame_time) {
    mob_update_velocity(mob, frame_time);
    mob->position.x += mob->velocity.x;
    mob->position.y += mob->velocity.y;
}

void mob_draw(Mob mob) {
    Vector2 display_position = {.x = mob.position.x, .y = mob.position.y + mob.position.z};
    sprite_draw(mob.sprite, display_position);
}
