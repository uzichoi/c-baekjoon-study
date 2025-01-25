#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int arr[100] = { 0 };
	int v, count = 0;

	scanf("%d", &n); //정수의 개수
	
	for (int i = 0; i < n; i++) {
		scanf("%d ", &arr[i]);
	}

	scanf("%d", &v); //key

	for (int i = 0; i < n; i++) {
		if (arr[i] == v)
			count++;
	}
	printf("%d\n", count);


	return 0;
}