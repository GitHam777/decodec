/* Create a Structure Book with name, price and and number of pages as attributes */

#include <stdio.h>
#include <string.h>
int main(void) 
{
  struct book 
  {
    char name[50];
    float price;
    int pages;
  };
  struct book HarryPotter;
  strcpy(HarryPotter.name, "Harry Potter Order of the Phoenix");
  HarryPotter.price = 550.50;
  HarryPotter.pages = 259;
  printf("%s\n", HarryPotter.name);
  printf("%f\n", HarryPotter.price);
  printf("%d\n", HarryPotter.pages);
  return 0;
}