#include <stdio.h>
int main() 
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int min = 0;
  for(int i = 1; i <= 2 * n - 1; i++)
  {
    for(int j = 1; j <= 2 * n - 1; j++)
    {
      int a = i;
      if (i>n)
        a = 2 * n - i;
      int b = j;
      if (j>n)
        b = 2 * n - j;
      if(a<b)
        min = a;
      else
        min = b;
      printf("%d ",min);
    }
    printf("\n");
  }
  return 0;
}

/* 

#include <stdio.h>
int main(void)
{
  float the = 3 + 4 + 3 + 3;
  float pra = 1 + 1.5 + 1.5 + 1.5 + 1.5;
  float pro = 1;

  float me = 7*the + 10*pra + 10*pro;
  float best = 10*the + 10*pra + 10*pro;
  
  printf("me = %f \nbest = %f \n", me, best);

  float gpa = me / best;
  printf("gpa = %f", gpa*10 );
  
}

*/

/*
#include <stdio.h>
int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int max = n;
  for(int i = 2 * n - 1; i >= 1; i--)
  {
    for(int j = 2 * n - 1; j >= 1; j--)
    {
      int a = i;
      if (i>n)
        a = 2 * n - i;
      int b = j;
      if (j>n)
        b = 2 * n - j;
      if(a>b)
        max = a;
      else
        max = b;
      printf("%d ",max);
    }
    printf("\n");
  }
  return 0;
}
*/