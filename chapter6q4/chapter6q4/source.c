#include <stdio.h>

int main(void)
{
	int sum = 0, i, x;

	while (1) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &x);
		if (x == 0)
			break;
		else {
			sum += x;
			continue;
		}
	}
	printf("�հ�=%d", sum);

	return 0;
}