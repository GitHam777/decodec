/* Search for a given integer in an Array of length given by the user which is also given by the user */

#include <stdio.h>
int main(void) 
{
  int n, k;
  printf("Enter Array Size: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter Array elements: ");
  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter number you want to search: ");
  scanf("%d", &k);
  for (int i = 0; i < n; i++) 
  {
    if (arr[i] == k) 
    {
      printf("%d found in index %d of Array", k, i);
      break;
    }
  }
  return 0;
}