#include <stdio.h>

int main()
{
    int arr[] = {10, 12, 5, 6, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 25;

    printf("Pairs with sum %d are:\n", sum);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}