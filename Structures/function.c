#include <stdio.h>
#include <string.h>
typedef struct pok 
{
  int hp;
  int atk;
  int def;
  int spe;
  char name[50];
} pokemon;

void func(pokemon p)
{
  printf("%d",p.hp);
  return;
}

int main(void) 
{
  pokemon pikachu;
  pikachu.hp = 60;
  func(pikachu);
  return 0;
}