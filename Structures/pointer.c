#include <stdio.h>
#include <string.h>
typedef struct pok 
{
  int hp;
  int atk;
  int def;
  char tier;
  char name[50];
} pokemon;

void change(pokemon* p)
{
  (*p).hp = 90;
  (*p).atk = 90;
  (*p).def = 90;
  (*p).tier = 'A';
  strcpy((*p).name, "Raichu");
  return;
}

/*void change(pokemon* p) 
{
  p->hp = 90;
  p->atk = 90;
  p->def = 90;
  p->tier = 'A';
  strcpy(p->name, "Raichu");
  return;
}*/

int main(void) 
{
  pokemon poka;
  // pokemom poka = {60, 60, 60, 'B', "Pikachu"};
  poka.hp = 60;
  poka.atk = 60;
  poka.def = 60;
  poka.tier = 'B';
  strcpy(poka.name, "Pikachu");

  printf("Name: %s\n", poka.name);
  printf("Health: %d\n", poka.hp);
  printf("Attack: %d\n", poka.atk);
  printf("Defence: %d\n", poka.def);
  printf("Tier: %c\n\n", poka.tier);

  pokemon* x;
  x = &poka;

  change(x);

  printf("Name: %s\n", poka.name);
  printf("Health: %d\n", poka.hp);
  printf("Attack: %d\n", poka.atk);
  printf("Defence: %d\n", poka.def);
  printf("Tier: %c", poka.tier);

  return 0;
}