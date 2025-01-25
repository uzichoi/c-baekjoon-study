#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int X, N, a, b, price = 0;
	scanf("%d", &X);
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		price += a * b;
	}
	if (X == price)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}