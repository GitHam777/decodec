#include<stdio.h>
int main()
{
    int r; float v;
    printf("Enter radius: ");
    scanf("%d",&r);
    v = ( 4 * 3.142 * r*r*r ) / 3.0;
    printf("Volume of sphere of radius %d : %f",r,v);
    return 0;
}