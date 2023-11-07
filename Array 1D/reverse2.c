/* Reverse an array of length given by the user without using any extra variable  */

#include <stdio.h>
int main(void) 
{
  int n;
  printf("Enter Array size: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter Array elements: ");
  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }
  for (int i = n - 1; i >= 0; i--) 
  {
    printf("%d ", arr[i]);
  }
  return 0;
}

/*

#include<stdio.h>
void reverse(int ar[])
{
  for(int i=0,j=6; i<j; i++,j--)
  {
    int t = ar[i];
    ar[i] = ar[j];
    ar[j] = t;
  }
  return;
}
int main(void)
{
  int ar[7] = {1,7,4,3,8,9,2};
  reverse(ar);
  for(int i=0; i<7; i++)
  {
    printf("%d ",ar[i]);
  }
  return 0;
}

*/