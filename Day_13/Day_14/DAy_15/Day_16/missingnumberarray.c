#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;   // Total numbers should be 1 to 5
    int sum = 0, total, missing;
    int size = 4;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}