#include <stdio.h>

int main(void)
{
	int x, i, j;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	for (i = 1; i <= x; i++) {
		for (j = 1; j <= i; j++) {
			printf("%3d ", j);
		}
		printf("\n");
	}

	return 0;
}