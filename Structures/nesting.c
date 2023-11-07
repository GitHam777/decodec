#include <stdio.h>
#include <string.h>
int main() 
{
  typedef struct pok 
  {
    int atk;
    int def;
    int spe;
    char name[50];
  } pokemon;

  typedef struct legend
  {
    pokemon normal;
    char ability[10];
  } legendary;

  legendary arceus;
  strcpy(arceus.ability, "Almighty");
  arceus.normal.atk = 120;
  arceus.normal.def = 120;
  arceus.normal.spe = 120;
  strcpy(arceus.normal.name, "ARCEUS");

  printf("Name: %s\n", arceus.normal.name);
  printf("Attack: %d\n", arceus.normal.atk);
  printf("Defence: %d\n", arceus.normal.def);
  printf("Speed: %d\n", arceus.normal.spe);
  printf("Ability: %s", arceus.ability);
  
  return 0;
}