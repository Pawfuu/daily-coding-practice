#include "rpg.h"
#include <stdio.h>
#include <stdlib.h>

adventurer_t create_adventurer(int level, char *name) {
  adventurer_t hero = {
      .level = level,
      .name = name,
      .guild = NULL,
  };
  return hero;
}

guild_t create_guild(char *name) {
  guild_t guild = {
      .name = name,
      .master = NULL,
  };
  return guild;
}

void join_guild(adventurer_t *hero, guild_t *guild) { hero->guild = guild; }
void appoint_master(guild_t *guild, adventurer_t *hero) {
  guild->master = hero;
}
