#include<stdio.h>
int main() {
    int N = 5;
    int sum = 0;
    for(int i=1; i<=N; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers is: %d", N, sum);
    return 0;
}