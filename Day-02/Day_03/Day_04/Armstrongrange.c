#include<stdio.h>
int main() {
    int n, start,end, i,digit,sum,temp;
    printf("Enter the starting number:");
    scanf("%d", &start);
    printf("Enter the ending number:");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for(i = start; i <= end; i++) {
        temp = i;
        sum = 0;
        while(temp != 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}