#include <stdio.h>
int main() 
{
  int n;
  printf("Enter number of rows: ");
  scanf("%d", &n);
  int nst = n;
  int nsp = 1;
  for (int i = 1; i <= (2 * n + 1) / 2 + 1; i++) 
  {
    printf("%d ", i);
  }
  for (int i = (2 * n + 1) / 2; i >= 1; i--) 
  {
    printf("%d ", i);
  }
  printf("\n");
  for (int i = 1; i <= n; i++) 
  {
    for (int j = 1; j <= nst; j++) 
    {
      printf("%d ", j);
    }
    for (int j = 1; j <= nsp; j++) 
    {
      printf("  ");
    }
    for (int j = nst; j >= 1; j--) 
    {
      printf("%d ", j);
    }
    nsp = nsp + 2;
    nst--;
    printf("\n");
  }
  return 0;
}