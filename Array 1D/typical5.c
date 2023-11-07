/* Find total number of triplets of elements of a given Array of size input by the user whose sum is equal to a number given by the user */

#include <stdio.h>
int main(void) 
{
  int n, x, c = 0;
  printf("Enter the number: ");
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
    for (int j = i + 1; j < n; j++) 
    {
      for (int k = j + 1; k < n; k++) 
      {
        if ((arr[i] + arr[j] + arr[k]) == x)
        {
          printf(" (%d , %d , %d) ", arr[i], arr[j], arr[k]);
          c++;
        }
      }
    }
  }
  printf("Number of pairs is %d", c);
  return 0;
}