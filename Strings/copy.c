/* Copy a String */

#include <stdio.h>
#include <string.h>
int main(void) 
{
  char s1[] = "Helo Mad";
  char *s2 = s1;
  printf("%s\n%s", s1, s2);
  return 0;
}