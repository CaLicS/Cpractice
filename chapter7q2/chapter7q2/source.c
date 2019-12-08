#include <stdio.h>

int main(void)
{
	int x[5], i, j, max, min;

	for (i = 0; i < 5; i++) {
		printf("정수를 입력하시오 : ");
		scanf("%d", &x[i]);
	}

	max = x[0];
	min = x[0];
	for (j = 1; j < 5; j++) {
		if (max < x[j])
			max = x[j];
		if (min > x[j])
			min = x[j];
	}
	printf("최대값 = %d 최소값 = %d", max, min);

	return 0;
}