#include <stdio.h>
int main(void) 
{
  int arr[10];
  printf("Enter marks: ");
  for (int i = 0; i < 10; i++) 
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 10; i++) 
  {
    if (arr[i] < 35) 
    {
      printf("%d ", i);
    }
  }
  return 0;
}