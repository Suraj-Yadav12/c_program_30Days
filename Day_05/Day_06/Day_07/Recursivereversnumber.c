#include<stdio.h>
int reverseNumber(int n) {
    static int rev = 0;
    if (n == 0) {
        return rev;
    }
    rev = rev * 10 + n % 10;
    return reverseNumber(n / 10);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d\n", n, reverseNumber(n));
    return 0;
}
