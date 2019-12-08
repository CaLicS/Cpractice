#include <stdio.h>

int main(void)
{
	int x, i;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	for (i = 1; i <= x; i++) {
		if (x % i == 0)
			printf("%d ", i);
	}

	return 0;
}