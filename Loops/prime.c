#include <stdio.h>
int main()
{
    int n, a = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("%d is neither prime nor composite", n);
    }
    else if (a == 0)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is composite number", n);
    }
    return 0;
}