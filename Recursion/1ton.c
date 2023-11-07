#include <stdio.h>
void increase(int x,int n) 
{
  if (x > n) 
  {
    return;
  } 
  printf("%d ", x);
  increase(x+1,n);
}
int main(void) 
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  increase(1,n);
  return 0;
}