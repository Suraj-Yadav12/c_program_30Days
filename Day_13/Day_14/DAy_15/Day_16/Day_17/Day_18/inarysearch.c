#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            found = 1;
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found)
        printf("%d found at position %d", key, mid + 1);
    else
        printf("%d not found in the array", key);

    return 0;
}