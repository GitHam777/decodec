#include <stdio.h>
#include <string.h>
int main() 
{
  typedef struct pok 
  {
    int atk;
    int def;
    int spe;
    int name[20];
  } pok;

  pok ar[2];

  ar[0].atk = 55;
  ar[0].def = 55;
  ar[0].spe = 70;
  strcpy(ar[0].name, "Pikachu");

  ar[1].atk = 70;
  ar[1].def = 130;
  ar[1].spe = 55;
  strcpy(ar[1].name, "Charizard");

  for (int i = 0; i < 2; i++) 
  {
    printf("%s\n", ar[i].name);
    printf("%d\n", ar[i].atk);
    printf("%d\n", ar[i].def);
    printf("%d\n", ar[i].spe);
    printf("\n");
  }

  return 0;
}