#include<stdio.h>
int main() {
    int start = 10, end = 20, i, flag;
    printf("Enter the starting number:");
    scanf("%d", &start);
    printf("Enter the ending number:");
    scanf("%d", &end);
    printf("%d%d:\n", start, end);
    for(i = start; i <= end; i++) {
        if(i == 1 || i == 0) {
            continue;
        }
        flag = 1;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}