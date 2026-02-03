#include "rpg.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int main() {
  printf("1. Testing Adventurer Creation...\n");
  adventurer_t hero = create_adventurer(10, "Geralt");
  assert(hero.level == 10);
  assert(strcmp(hero.name, "Geralt") == 0);
  assert(hero.guild == NULL); // Crucial: New heroes have no guild yet
  printf("   [PASS]\n");

  printf("2. Testing Guild Creation...\n");
  guild_t guild = create_guild("Wolf School");
  assert(strcmp(guild.name, "Wolf School") == 0);
  assert(guild.master == NULL); // Crucial: New guilds have no master yet
  printf("   [PASS]\n");

  printf("3. Testing Join Guild (Pointer linkage)...\n");
  join_guild(&hero, &guild);
  // logic check: The hero's guild name should now match "Wolf School"
  assert(strcmp(hero.guild->name, "Wolf School") == 0);
  printf("   [PASS]\n");

  printf("4. Testing Appoint Master (Pointer linkage)...\n");
  appoint_master(&guild, &hero);
  // logic check: The guild's master name should now match "Geralt"
  assert(strcmp(guild.master->name, "Geralt") == 0);
  printf("   [PASS]\n");

  printf("\nAll systems operational. Great work!\n");
  return 0;
}
