#include<stdio.h>
int main() {
    int n=4 , count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0) {
        n = n / 10;
        count++;
    }
    printf("Number of digits: %d", count);
    return 0;
}
