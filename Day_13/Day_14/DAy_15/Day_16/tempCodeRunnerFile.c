#include<stdio.h>
int main() {
    int arr,n, sum, total,size,missing;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    total = (n*(n+1))/2;
    missing = total - sum;
    printf("The missing number is: %d", missing);
    return 0;
}