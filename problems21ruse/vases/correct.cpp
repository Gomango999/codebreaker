#include <cstdio>

int main () {
	int N;
	scanf("%d", &N);
	if (N < 6) {
		printf("0 0 0\n");
		return 0;
	}

	printf("%d %d %d\n", 1, 2, N-3);
}