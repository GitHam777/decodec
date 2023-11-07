#include <stdio.h>
#include <string.h>
int main() 
{
  typedef struct date 
  {
    int day;
    int month;
    int year;
  } date;

  date a, b;

  a.day = 17;
  a.month = 10;
  a.year = 2003;

  b.day = 17;
  b.month = 10;
  b.year = 2003;

  if ((a.day == b.day) && (a.month == b.month) && (a.year == b.year)) 
  {
    printf("Same Dates");
  } 
  else 
  {
    printf("Different Dates");
  }
  return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() 
{
  typedef struct date 
  {
    int day;
    int month;
    int year;
  } date;

  date a, b;
  bool flag = true;

  a.day = 17;
  a.month = 10;
  a.year = 2003;

  b.day = 17;
  b.month = 10;
  b.year = 2003;

  if(a.day != b.day)
  {
    flag = false;
  }
  if(a.month != b.month)
  {
    flag = false;
  }
  if(a.year != b.year)
  {
    flag = false;
  }

  if(flag==false)
  {
    printf("Dates are different");
  }
  else
  {
    printf("Dates are same");
  }
  
  return 0;
}
*/