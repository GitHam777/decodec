#include <stdio.h>
int fact(int n) 
{
  int f = 1;
  for (int i = 1; i <= n; i++) 
  {
    f = f * i;
  }
  return f;
}
int permu(int n, int r) 
{
  int ncr = fact(n) / (fact(r) * (fact(n - r)));
  return ncr;
}
int main() 
{
  int n;
  printf("Enter row number: ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) 
  {
    for (int j = 0; j <= i; j++) 
    {
      printf("%d ", permu(i, j));
    }
    printf("\n");
  }
  return 0;
}
/* nCr = n! / r! ^ (n-r)! */