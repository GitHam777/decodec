#include <stdio.h>
int max(int a,int b)
{
  if(a>b)
  {
    return a;
  }
  else
  {
    return b;
  }
}
int gcd(int a,int b)
{
  int hcf;
  for(int i=max(a,b); i>=1;i--)
  {
    if(a%i==0 && b%i==0)
    {
      hcf = i;
      break;
    }
  }
  return hcf;
}
int main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  int hcf; //highest common factor
  hcf = gcd(a,b);
  printf("The HCF is %d",hcf);
  return 0;
}