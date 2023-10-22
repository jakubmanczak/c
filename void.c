#include <stdio.h>
#include <stdlib.h>

typedef struct point {
  int x;
  int y;
} point;

enum entityTypes{
  ent_none, ent_player, ent_enemy
};

char *entityTypeStrings[] = {"ENT_NONE", "ENT_PLAYER", "ENT_ENEMY"};

typedef struct innerEntity {
  int type;
  point position;
  void *more;
  struct innerEntity *next;
} entity;

typedef struct playermore{
  int collision;
  int input;
  int health;
} playermore;

typedef struct enemymore{
  int wearsHat;
  int health;
} enemymore;

entity *addPlayerEntity(entity *ents, point _position, int _health){
  entity *player = malloc(sizeof(entity));
  player->type = ent_player; player->position = _position; player->next = NULL;
  player->more = malloc(sizeof(playermore));
  playermore *data = player->more;
  data->input = 17; data->collision = 1; data->health = _health;

  while(ents && ents->next){
    ents = ents->next;
  } if(ents) ents->next = player;
  return player;
}
entity *addEnemyEntity(entity *ents, point _position, int _health){
  entity *enemy = malloc(sizeof(entity));
  enemy->type = ent_enemy; enemy->position = _position; enemy->next = NULL;
  enemy->more = malloc(sizeof(enemymore));
  enemymore *data = enemy->more;
  data->wearsHat = 1; data->health = _health;

  while(ents && ents->next){
    ents = ents->next;
  } if(ents) ents->next = enemy;
  return enemy;
}

void printEntities(entity *ents){
  int i = 0;
  while(ents){
    printf("ENCOUNTERED AN ENTITY (INDEX: %d) -> %s\n", i, entityTypeStrings[ents->type]);
    printf("ent->type: %d\n", ents->type);
    printf("ent->position: %d %d\n", ents->position.x, ents->position.y);

    if(ents->type == ent_player){
      playermore *data = ents->more;
      printf("ent->more->collision: %d\n", data->collision);
      printf("ent->more->input: %d\n", data->input);
      printf("ent->more->health: %d\n", data->health);
    }else if(ents->type == ent_enemy){
      enemymore* data = ents->more;
      printf("ent->more->wearshat: %d\n", data->wearsHat);
      printf("ent->more->health: %d\n", data->health);
    }

    printf("ent->next: %p\n", ents->next);
    if(ents->next) printf("\n");
    ents = ents->next; i++;
  }
}

int main(void){
  entity *ents = NULL;
  if(ents) addPlayerEntity(ents, (point){16, 16}, 100);
  else ents = addPlayerEntity(ents, (point){16, 16}, 100);
  
  if(ents) addEnemyEntity(ents, (point){32, 16}, 75);
  else ents = addEnemyEntity(ents, (point){32, 16}, 75);

  printEntities(ents);

  return 0;
}