#include <stdio.h>
#include <stdbool.h>

int arraySum(int array[], int n)
{
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum = totalsum + array[i];
    }
    return totalsum;
}

bool equalSumPartition(int array[], int n)
{
    int totalsum = arraySum(array, n);
    int presum = 0, sufsum;
    for (int i = 0; i < n; i++)
    {
        presum = presum + array[i];
        sufsum = totalsum - presum;
        if (sufsum == presum)
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    int n;
    printf("Enter Array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Probability of Array division: ");
    if (equalSumPartition(arr, n) == true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}