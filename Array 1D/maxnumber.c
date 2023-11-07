#include <stdio.h>
int main(void) 
{
  int arr[10];
  int max, pos;
  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++) 
  {
    scanf("%d", &arr[i]);
  }
  max = arr[0];
  for (int i = 0; i < 10; i++) 
  {
    if (arr[i] > max) 
    {
      max = arr[i];
      pos = i + 1;
    }
  }
  printf("Max is %d at Position %d", max, pos);
  return 0;
}