#include "../../../include/game/entities/player.h"
#include <stdio.h>
#include <raylib.h>
#include <raymath.h>

void player_update_direction(Player *player) {
    player->direction.x = 0;
    player->direction.y = 0;

    player->direction.x += IsKeyDown(KEY_LEFT) ? -1:0;
    player->direction.x += IsKeyDown(KEY_RIGHT) ? 1:0;
    player->direction.y += IsKeyDown(KEY_DOWN) ? 1:0;
    player->direction.y += IsKeyDown(KEY_UP) ? -1:0;

    player->direction = Vector2Normalize(player->direction);
    printf("%f  %f | ", player->direction.x, player->direction.y );
}

void player_update(Player *player, float frame_time) {
    player_update_direction(player);
    mob_update(player, frame_time);
}

void player_draw(Player player){
    mob_draw(player);
}
