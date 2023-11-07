#include<stdio.h>
int main()
{
    int r; float a;
    printf("Enter area of circle: ");
    scanf("%d",&r);
    a = 3.142 * r * r;
    printf("Area of circle of radius %d is : %f",r,a);
    return 0;
}