#ifndef RPG_H
#define RPG_H

// Forward declarations
typedef struct Adventurer adventurer_t;
typedef struct Guild guild_t;

struct Adventurer {
  int level; // similar to 'id'
  char *name;
  guild_t *guild; // Pointer to the guild they have joined
};

struct Guild {
  char *name;
  adventurer_t *master; // Pointer to the adventurer running the guild
};

// --- Your Mission: Implement these 4 functions in rpg.c ---

// Constructors
adventurer_t create_adventurer(int level, char *name);
guild_t create_guild(char *name);

// Relationship setters
void join_guild(adventurer_t *hero, guild_t *guild);
void appoint_master(guild_t *guild, adventurer_t *hero);

#endif
