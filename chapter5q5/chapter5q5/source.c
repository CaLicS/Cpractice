#include <stdio.h>

int main(void)
{
	double x, y;

	printf("���� ǥ���� �Է��Ͻÿ�(����) : ");
	scanf("%lf", &x);

	if (x > 8000)
		y = (x - 8000) * 0.35 + 4000 * 0.26 + 3000 * 0.17 + 1000 * 0.08;
	else if (x > 4000 && x <= 8000)
		y = (x - 4000) * 0.26 + 3000 * 0.17 + 1000 * 0.08;
	else if (x > 1000 && x <= 4000)
		y = (x - 1000) * 0.17 + 1000 * 0.08;
	else if (x <= 1000)
		y = x * 0.08;

	printf("�ҵ漼�� %d�����Դϴ�.", (int)y);

	return 0;
}