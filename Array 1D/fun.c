#include <stdio.h>
void func(int x[]) 
{
  int t;
  t = x[0];
  x[0] = x[1];
  x[1] = t;
  return;
}
int main(void) 
{
  int ar[2] = {2, 7};
  printf("%d %d\n", ar[0], ar[1]);
  func(ar);
  printf("%d %d\n", ar[0], ar[1]);
  return 0;
}