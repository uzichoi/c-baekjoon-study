#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, i, sum = 0;
	char n[100];
	scanf("%d", &N);

	if (N >= 1 && N <= 100) {
		scanf("%s", n);
		for (i = 0; i < N; i++) {
			sum += n[i] - '0';
		}
	}

	printf("%d\n", sum);

	return 0;
}