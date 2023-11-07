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
  } pok;

  pok a, b;

  a.atk = 100;
  a.def = 70;
  a.spe = 55;
  strcpy(a.name, "Blastoise");

  b = a; // deep copy created! b.atk = 200 wont show in output
  strcpy(b.name, "Venusaur"); // but this will

  printf("Name: %s\n", b.name);
  printf("Attack: %d\n", b.atk);
  printf("Defense: %d\n", b.spe);
  printf("Speed: %d", b.spe);

  return 0;
}