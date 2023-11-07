#include <stdio.h>
void increase(int n) 
{
  if (n==0) 
  {
    return;
  }
  printf("%d ",n);
  increase(n-1);
  printf("%d ", n);
  return;
}
int main(void) 
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  increase(n);
  return 0;
}