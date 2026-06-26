#include<stdio.h>
int main() {
    int n, i, largest, smallest;
    int arr[100];
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter %d elements:", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("largest element: %d\n", largest);
    printf("smallest element: %d\n", smallest);
    return 0;
}