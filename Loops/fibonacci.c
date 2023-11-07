#include <stdio.h>
int main(void) 
{
  int n, a = 1, b = 1, s = 0, c = a;
  printf("Enter number: ");
  scanf("%d", &n);
  printf("%d , ", a);
  for (int i = 1; i < n; i++) 
  {
    printf("%d , ", b);
    c = c + b;
    s = a + b;
    a = b;
    b = s;
  }
  printf("\nThe sum of Fibonacci upto the term is %d",c);
  return 0;
}