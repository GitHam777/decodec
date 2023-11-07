#include <stdio.h>
void sum(int n, int s) 
{
  if (n == 0) 
  {
    printf("%d", s);
    return;
  } 
  else 
  {
    sum(n - 1, s + n);
    return;
  }
}
int main(void) 
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  sum(n, 0);
  return 0;
}