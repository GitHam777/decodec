#include <stdio.h>
int main(void) 
{
  struct loomian 
  {
    int health;
    int speed;
    int attack;
    int defense;
    char tier;
  }/*vambat,eaglit*/;

  struct loomian vambat;
  vambat.attack = 40;
  vambat.defense = 20;
  vambat.health = 35;
  vambat.speed = 50;
  vambat.tier = 'C';

  struct loomian eaglit;
  eaglit.attack = 30;
  eaglit.defense = 30;
  eaglit.health = 45;
  eaglit.speed = 40;
  eaglit.tier = 'B';

  return 0;
}