/* Count the number of elements greater than a given number x in an Array of elements input by the user */

#include <stdio.h>
int main(void) 
{
  int x, n, c = 0;
  printf("Enter the number to compare with: ");
  scanf("%d", &x);
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
    if (arr[i] > x) 
    {
      c++;
    }
  }
  printf("Array elements greater than %d is %d", x, c);
  return 0;
}