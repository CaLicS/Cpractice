#include <stdio.h>

int main(void)
{
	int sum = 0, i, x;

	while (1) {
		printf("정수를 입력하시오 : ");
		scanf("%d", &x);
		if (x == 0)
			break;
		else {
			sum += x;
			continue;
		}
	}
	printf("합계=%d", sum);

	return 0;
}