#include <stdio.h>
int main() 
{
  int n;
  printf("Enter number of rows: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) 
  {
    for (int j = 1; j <= (n - i); j++) 
    {
      printf("  ");
    }
    for (int j = 1; j <= (2 * i - 1) / 2; j++) 
    {
      printf("%d ", j);
    }
    for (int k = (2 * i - 3) / 2; k >= 1; k--) 
    {
      printf("%d ", k);
    }
    printf("\n");
  }
  return 0;
}


/*
#include <stdio.h>
int main() 
{
  int n;
  printf("Enter number of rows: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) 
  {
    for (int j = 1; j <= (n - i); j++) 
    {
      printf("  ");
    }
    for (int j = 1; j <= i; j++) 
    {
      printf("%d ", j);
    }
    for (int k = (2 * i - 2) / 2; k >= 1; k--) 
    {
      printf("%d ", k);
    }
    printf("\n");
  }
  return 0;
}
*/