#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5; float sa;
    printf("Enter marks of subjects: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sa = (s1+s2+s3+s4+s5)/5.0;
    printf("Average Marks: %f",sa);
}