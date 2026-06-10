#include<stdio.h>
int main()
{
    int n = 12345, count = 0;
    while(n != 0) {
        n = n / 10;
        count++;
    }
    printf("Number of digits is %d", count);
    return 0;
}