#include <stdio.h>
int main() 
{
  int n;
  printf("Enter number of rows: ");
  scanf("%d", &n);
  int nsp = n/2; //number of spaces
  int nst = 1; //number of stars
  int ml = n/2+1; //middle line
  for(int i=1;i<=n;i++)
  {
    for(int j=1; j<=nsp; j++)
    {
      printf("  ");
    }
    for(int j=1; j<=nst; j++)
    {
      printf("* ");
    }
    if(i<ml)
    {
      nsp--;
      nst = nst + 2;
    }
    else
    {
      nsp++;
      nst = nst - 2;
    }
    printf("\n");
  }
  return 0;
}