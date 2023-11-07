#include <stdio.h>
int main(void) 
{
  int n;
  printf("Enter Array size: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter Array elements: ");
  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) 
  {
    if (i % 2 == 0) 
    {
      arr[i] = arr[i] + 10;
      printf("%d ", arr[i]);
    } 
    else 
    {
      arr[i] = arr[i] * 2;
      printf("%d ", arr[i]);
    }
  }
  return 0;
}