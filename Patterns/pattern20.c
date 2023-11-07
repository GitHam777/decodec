#include <stdio.h>
int main() 
{
  int n, c = 65;
  printf("Enter number of rows: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) 
  {
    for (int j = 1; j <= (n - i); j++) 
    {
      printf("  ");
    }
    for (int j = 1; j <= (2 * i - 1); j++) 
    {
      printf("%c ", (char)c);
      c++;
    }
    printf("\n");
    c = 65;
  }
  return 0;
}