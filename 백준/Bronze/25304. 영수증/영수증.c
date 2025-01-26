#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int c, d, sum = 0;
    for (int i = 0;i < b;i++) {
        scanf("%d", &c);
        scanf("%d", &d);
        sum += c * d;
    }
    if (sum == a) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}