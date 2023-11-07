#include <stdio.h>
void decrease(int n)
{
  if (n == 0)
  {
    return;
  }
  else
  {
    printf("%d ", n);
    decrease(n - 1);
  }
}
int main(void)
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  decrease(n);
  return 0;
}