#include <stdio.h>

int main(void)
{
	int i, count, x;
	

	for (count = 1; count <= 10; count++) {
		printf("�����͸� �Է��Ͻÿ� : ");
		scanf("%d", &x);
		for (i = 1; i <= x; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}