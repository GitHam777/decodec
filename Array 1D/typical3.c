/* Calculate the difference of the sum of integers at even indexes and the sum of integers at the even indexes in an Array of length given by the user */

#include <stdio.h>
int main(void) 
{
  int n, odd = 0, even = 0;
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
      even = even + arr[i];
    } 
    else 
    {
      odd = odd + arr[i];
    }
  }
  printf("Difference of elements at even and odd index is %d", even - odd);
  return 0;
}