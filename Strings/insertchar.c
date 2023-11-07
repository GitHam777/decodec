#include <stdio.h>
#include <string.h>
int main(void) 
{
  char str[] = "Anurag";
  //O at index 2
  printf("%s\n",str);
  for(int i=6; i>=2; i--)
  {
    str[i+1] = str[i];
  }
  str[2] = 'O';
  printf("%s",str);
  return 0;
}