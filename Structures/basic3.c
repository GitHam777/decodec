#include <stdio.h>
#include <string.h>
int main(void) 
{
  struct person 
  {
    char name[50];
    int salary;
    int age;
  } a, b;

  strcpy(a.name, "Hareram Pandit");
  a.salary = 20000;
  a.age = 33;

  strcpy(b.name, "King Asian");
  b.salary = 30000;
  b.age = 29;

  printf("%s\n%d", a.name, b.age);
  return 0;
}