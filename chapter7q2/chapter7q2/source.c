#include <stdio.h>

int main(void)
{
	int x[5], i, j, max, min;

	for (i = 0; i < 5; i++) {
		printf("������ �Է��Ͻÿ� : ");
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
	printf("�ִ밪 = %d �ּҰ� = %d", max, min);

	return 0;
}