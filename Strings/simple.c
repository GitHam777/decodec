#include <stdio.h>
int main(void) 
{
  char arr[] = {'H', 'e', 'e', 'l', 'o', '\0'};
  int i = 0;
  while (arr[i] != '\0') 
  {
    printf("%c", arr[i]);
    i++;
  }
  return 0;
}