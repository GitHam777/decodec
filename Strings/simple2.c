#include <stdio.h>
int main(void) 
{
  char arr[] = "Hello and have a nice day";
  int i = 0;
  while (arr[i] != '\0') 
  {
    printf("%c ", arr[i]);
    i++;
  }
  return 0;
}