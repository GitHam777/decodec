#include <stdio.h>
int power(int a, int b)
{
  if (b == 0) 
  {
    return 1;
  } 
  else 
  {
    return a * power(a, b - 1);
  }
}
int main(void) 
{
  int a, b;
  printf("Enter base: ");
  scanf("%d", &a);
  printf("Enter power: ");
  scanf("%d", &b);
  printf("%d raised to %d is: %d", a, b, power(a, b));
}