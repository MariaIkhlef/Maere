#pragma once
#include "mob.h"
#include <raylib.h>

typedef Mob Player;

void player_update(Player *player, float frame_time);
void player_draw(Player player);
