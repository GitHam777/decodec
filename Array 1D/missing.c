/* Find the missing element in an Array of length given by the user of increasing order */

#include <stdio.h>
int main(void) 
{
  int n, s = 0, sf = 0;
  printf("Enter Array Size: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter Array elements: ");
  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }
  sf = ((n + 1) * (n + 2)) / 2;
  for (int i = 0; i < n; i++) 
  {
    s = s + arr[i];
  }
  printf("Missing number is %d", sf - s);
  return 0;
}