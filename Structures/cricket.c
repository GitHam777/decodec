#include <stdio.h>
#include <string.h>
int main() 
{
  typedef struct cric
  {
    char firstname[50];
    char lastname[50];
    int age;
    int matches;
    float average;
  } cric;

  cric ar[20];
  
  for (int i = 0; i < 20; i++) 
  {
    scanf("%s", ar[i].firstname);
    scanf("%s", ar[i].lastname);
    scanf("%d", &ar[i].age);
    scanf("%d", &ar[i].matches);
    scanf("%f", &ar[i].average);
    scanf("\n");
  }
  
  for (int i = 0; i < 20; i++) 
  {
    printf("NAME: %s %s \n", ar[i].firstname, ar[i].lastname);
    printf("AGE: %d\n", ar[i].age);
    printf("MATCHES: %d\n", ar[i].matches);
    printf("AVERAGE: %f\n", ar[i].average);
    printf("\n");
  }
  return 0;
}