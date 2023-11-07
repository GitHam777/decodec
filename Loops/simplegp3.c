#include<stdio.h>
int main()
{
    float a=100.0; int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%f , ",a);
        a = a/2;
    }
    return 0;
}