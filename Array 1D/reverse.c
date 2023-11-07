#include <stdio.h>
int main(void) 
{
  int n;
  printf("Enter Array size: ");
  scanf("%d", &n);
  int arr[n], brr[n];
  printf("Enter Array elements: ");
  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) 
  {
    brr[i] = arr[n - i - 1];
    printf("%d ", brr[i]);
  }
  return 0;
}