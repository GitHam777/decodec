#include <stdio.h>
int main() 
{
  int n, c = 1;
  printf("Enter number of rows: ");
  scanf("%d", &n);
  int nst = n;
  int nsp = 1;
  for (int i = 1; i <= 2 * n + 1; i++) 
  {
    printf("%d ", i);
  }
  printf("\n");
  for (int i = 1; i <= n; i++) 
  {
    for (int j = 1; j <= nst; j++) 
    {
      printf("%d ", c);
      c++;
    }
    for (int j = 1; j <= nsp; j++) 
    {
      printf("  ");
      c++;
    }
    for (int j = 1; j <= nst; j++)
    {
      printf("%d ", c);
      c++;
    }
    nsp = nsp + 2;
    nst--;
    c = 1;
    printf("\n");
  }
  return 0;
}