#include <stdio.h>
int sum(int n) 
{
  if (n == 0) 
  {
    return 0;
  } 
  else 
  {
    return n + sum(n - 1);
  }
}
int main(void) 
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Sum from 1 to %d = %d", n, sum(n));
  return 0;
}