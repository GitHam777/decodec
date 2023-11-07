/* Reverse a given String */

#include <stdio.h>
#include <string.h>
int main(void) 
{
  int i = 0, j, s = 0;
  char str[40];
  printf("Enter String: ");
  scanf("%[^\n]s", str);
  while (str[i] != '\0') 
  {
    s++;
    i++;
  }
  for (i = 0, j = s - 1; i <= j; i++, j--) 
  {
    int t = str[i];
    str[i] = str[j];
    str[j] = t;
  }
  printf("Reverse String is: %s", str);
  return 0;
}