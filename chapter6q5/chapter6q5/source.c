#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 1; i < 8; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);
		}
		for (k = 6; k >= i; k--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}