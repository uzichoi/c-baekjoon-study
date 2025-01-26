#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char S[100];
	int alpha[26];

	scanf("%s", S);
	int i, len = strlen(S);

	for (i = 0; i < 26; i++) {
		alpha[i] = -1;
	}
	for (i = 0; i < len; i++) {
		if (alpha[S[i] - 'a'] == -1)
			alpha[S[i] - 'a'] = i;
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}


	return 0;
}