#include <stdio.h>

int main(void)
{
	int x, i;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	for (i = 1; i <= x; i++) {
		if (x % i == 0)
			printf("%d ", i);
	}

	return 0;
}