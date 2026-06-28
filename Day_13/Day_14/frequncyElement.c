#include<stdio.h>
int main() {
    int freq[100], arr[100], n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }
    printf("Element\tFrequency\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }
    return 0;
}