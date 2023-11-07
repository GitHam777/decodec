/* Get the size of a given String */

#include <stdio.h>
#include <string.h>
int main(void) 
{
  int i = 0, s = 0;
  char str[40];
  printf("Enter String: ");
  scanf("%[^\n]s", str);
  while (str[i] != '\0') 
  {
    s++;
    i++;
  }
  printf("Size of String is: %d", s);
  return 0;
}