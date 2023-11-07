#include <stdio.h>
int main(void) 
{
  int n, c = 0;
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
    if (arr[i] != arr[n - i - 1]) 
    {
      c = 1;
      break;
    }
  }
  if (c == 1) 
  {
    printf("Array is not Palindrome");
  } 
  else 
  {
    printf("Array is Palindrome");
  }
  return 0;
}