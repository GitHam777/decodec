/* Reverse the elements of a particular block/section in a given Array of length given by the user which will have start index and end index given by the user only */

#include <stdio.h>
void reverse(int arr[], int a, int b) 
{
  for (int i = a, j = b; i < j; i++, j--) 
  {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
  }
  return;
}
int main(void) 
{
  int n, a, b;
  printf("Enter Array size: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter Array elements: ");
  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter block positions you want to switch: ");
  scanf("%d%d", &a, &b);
  reverse(arr, a, b);
  for (int i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }
  return 0;
}