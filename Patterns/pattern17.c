#include <stdio.h>
int main() 
{
  int n, a = 65;
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
      printf("%c ", (char)a);
      a++;
    }
    printf("\n");
    a = 65;
  }
  return 0;
}