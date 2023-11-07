#include <stdio.h>
int fibo(int n) 
{
  if (n <= 2) 
  {
    return 1;
  }
  return fibo(n - 1) + fibo(n - 2);
}
int main(void) 
{
  int n;
  printf("Enter term position: ");
  scanf("%d", &n);
  printf("%d ", fibo(n));
}