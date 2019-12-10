#include <stdio.h>

int main(void)
{
	int i, count, x;
	

	for (count = 1; count <= 10; count++) {
		printf("데이터를 입력하시오 : ");
		scanf("%d", &x);
		for (i = 1; i <= x; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}